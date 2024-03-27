#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, b, c, d;
        cin >> n >> a >> b >> c >> d;
        // you can either directly go from start to end or you can first go out and then reach the end
        int directReach = abs(a - c) + abs(b - d);
        // you first have to get out from start and then get out from end also and then add them
        int outsideReach = min({a, b, n + 1 - a, n + 1 - b}) + min({c, d, n + 1 - c, n + 1 - d});
        cout << min(directReach, outsideReach) << endl;
    }
}
