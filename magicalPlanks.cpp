#include <bits/stdc++.h>
using namespace std;

int solve(int n, string& s, char c){
    int cnt = 0, i = 0;
    while(i < n){
        if(s[i]==c){
            while(i < n && s[i]==c) i++;
            cnt++;
        }
        else i++;
    }
    return cnt;
}
int main() {
	int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        //check for W and B
        int forW = solve(n, s, 'W');
        int forB = solve(n, s, 'B');
        cout<<min(forW, forB)<<endl;
    }

}
