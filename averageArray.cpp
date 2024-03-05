// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n,x;
//         cin>>n>>x;
//         int sum = n*x;
//         vector<int>ans;
//         int val = 1, tsum = 0;
//         while(n-1 > 0){
//             // divide the sum into n parts each unqiue with sum = x*n 
//             ans.push_back(val);
//             tsum += val;
//             val++;
//             n--;
//         }
//         ans.push_back(sum-tsum);
//         for(auto ele : ans) cout<<ele<<" ";
//         cout<<endl;
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        // When n is odd, we start by printing x itself, as one of the array elements.
        if (n % 2 == 1) {
            cout << x << " ";
            n--;
        }
        // For the remaining elements or if n was even from the start,
        // we print pairs that sum up to 2*x. This maintains the average.
        for (int i = 1; i <= n / 2; i++) {
            cout << x - i << " " << x + i << " ";
        }
        cout << endl;
    }
    return 0;
}