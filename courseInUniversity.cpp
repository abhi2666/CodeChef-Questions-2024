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
        int mx = INT_MIN;
        for(int i = 0; i < n; i++){
            cin>>a[i];
            mx=max(mx, a[i]);
        }
        // max element will represents that mx courses will be used as prereq
        // n - max element will be the courses that will not be prereq for any course
        cout<<n-mx<<endl;
    }
    return 0;
}