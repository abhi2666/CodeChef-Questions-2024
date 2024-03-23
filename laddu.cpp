#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
    cin>>t;
    while(t--){
        int n;
        string s;
        cin>>n>>s;
        int threshold = 0;
        if(s=="INDIAN") threshold = 200;
        else threshold = 400;

        int score = 0;
        string activity = ""; 
        while(n--){
            cin>>activity;
            if(activity=="CONTEST_WON"){
                int rank;
                cin>>rank;
                score += (300 + (20-rank > 0 ? 20-rank : 0));
            }
            else if(activity=="TOP_CONTRIBUTOR") score += 300;
            else if(activity=="BUG_FOUND"){
                int severity;
                cin>>severity;
                score += severity;
            }
            else score += 50;
        }
        // cout<<"score: "<<score<<endl;
        int redeemable = score/threshold;
        cout<<redeemable<<endl;
    }

}
