#include <bits/stdc++.h>
using namespace std;

void solve(int r, int c, int rows, int cols, int dist, int &count){
    // just try to reach as many boxes as you can
}
int main() {
    int t;
    cin>>t;
    while(t--){
        int n, m, x, y, l;
        cin>>n>>m>>x>>y>>l;
        int count = 1;
        solve(x, y, n, m, l, count);
        cout<<count<<endl;
    }
    return 0;
}
