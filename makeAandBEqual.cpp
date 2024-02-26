#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n], b[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];
        int forA = 0, forB = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] < b[i])
                forA += b[i] - a[i];
            else
                forB += a[i] - b[i];
        }
        if (forA != forB)
            cout << -1 << endl;
        else
            cout << forA << endl;
    }
    return 0;
}
