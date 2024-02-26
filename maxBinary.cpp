/*
maximize the decimal rep of binary no by either adding ones anywhere or by flipping 1/0 or vice versa.. you only have k moves to perform
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        string s;
        cin>>s;
        // if start is zero make it one and make
        if(s[0] == '1') {
            while(k--){
                s += '0';
            }
        }
        else{
            s[0] = '1';
            --k;
            while(k--) s += '0';
        }
        cout<<s<<endl;
    }
	return 0;
}
