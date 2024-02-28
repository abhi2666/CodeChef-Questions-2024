#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i = 0; i < n; i++) cin>>a[i];
        // two smallest elements should be on the first and the last position 
        // rest two elements will be counted two times
        sort(a.begin(), a.end());
        long ans = a[0] + a[1];
        for(int i = 2; i < n; i++) ans += (2*a[i]);
        cout<<ans<<endl;
    }
    return 0;
}