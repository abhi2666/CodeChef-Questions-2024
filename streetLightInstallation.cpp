// #include <bits/stdc++.h>
// using namespace std;

// int minLights(vector<int>&a){
//     int ans = 0;
//     int l = 0, r = 0, n = a.size();
//     vector<int>prev(2);
//     for(int i = 0; i < n; i++){
//         l = max((i-a[i]), 1) ;
//         r = min((i + a[i]), n); // range of current light 
//         if(prev.size() == 0){
//             // means first time inserting
//             prev[0] = l;
//             prev[1] = r;
//             ans++;
//         }
//         else{
//             // its not first time.. check if there is any type of merging in the interval or not
//             if(l > prev[1]){
//                 //means this is different interval
//                 ans++;
//             }
//             else if(prev[0] < l && prev[1] > r) {
//                 // this interval comes under the previous interval
//                 continue;
//             }
//             else{
//                 // means some merging is there
//                 prev[0] = min(prev[0], l);
//                 prev[1] = max(prev[1], r);
//                 ans++;
//             }
//         }
//         if(prev[0] == 1 && prev[1] == n) return ans;
//     }
//     return ans;

// }

// int main()
// {
//     vector<int>a = {0, 2, 13};
//     cout<<minLights(a)<<endl;
//     return 0;
// }


// to be done...
// create actual intervals that you can use to find merging intervals
// intervals that merge will increment light count and if one interval resides inside other than no need to increase the count