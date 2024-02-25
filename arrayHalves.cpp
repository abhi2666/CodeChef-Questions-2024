/*
find min no. of swaps to transform the array of size n*2 so that max(in first half) < min(second half)

first half - 0 to n-1 
second half - n to 2*n
approach -> using two pointers to traverse and look for potential misplaced elements
*/

#include <bits/stdc++.h>
using namespace std;

#define int long long

int count_ops(int n, int* p) {
    int op=0;
    int ptr1=0,ptr2=n;
        
    while(ptr1 < n and ptr2 < 2*n){
        if( p[ptr1]<=n ){
            ptr1++;
            continue;
        } 
        if( p[ptr2] > n ){
            ptr2++;
            continue;
        } 

        if( p[ptr1] > n and p[ptr2] <= n ){
            op+=(ptr2-ptr1);
            ptr1++; ptr2++;
        }
    }
    return op;
}

signed main() {
    int t;
    cin >> t;
    while (t--) {
        int n; cin>>n;
        int p[2*n];
        for (int i = 0; i < 2*n; i++) cin >> p[i];
        //read_input(n, p);
        cout<<count_ops(n, p) <<"\n";
    }
    return 0;
}

