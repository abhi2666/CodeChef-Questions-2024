/*
swap any two elements that are not adjancent and check if you can make the array sorted or not..

Approach --> simply just check for the case of n = 2 and 3 only and for all the other cases it is always possible to sort the array following the above rules..
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int>a(n);
	    for(int i = 0; i < n; i++) cin>>a[i];
	    // main solution
	    if(n==2) {
	        if(a[0] < a[1]) cout<<"YES"<<endl;
	        else cout<<"NO"<<endl;
	    }
        else if(n==3){
            // middle element should neither be max nor min
            if(a[1] > max(a[0], a[2]) || a[1] < min(a[0], a[2])) cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
        }
        else{
            // for all other cases it is always yes
            cout<<"YES"<<endl;
        }
	}

    return 0;

}
