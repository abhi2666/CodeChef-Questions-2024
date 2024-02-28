#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        if (n <= 2)
        {
            cout << 1 << endl;
            continue;
        }
        long long ans = 0;
        long long i = n/2;
        ans = (i*(i+1))/2;
        i += 1;
        if (n % 2) ans += i;
        cout << ans << endl;
    }
    return 0;
}