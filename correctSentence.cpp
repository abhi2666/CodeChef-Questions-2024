#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int k;
        cin >> k;
        vector<string> strings;
        for (int i = 0; i < k; i++)
        {
            string temp;
            cin >> temp;
            strings.push_back(temp);
        }

        bool possible = true;
        for (auto s : strings)
        {
            bool lowStr = false, capStr = false;
            for (auto ch : s)
            {
                if (ch >= 'a' && ch <= 'm')
                {
                    if (capStr)
                    {
                        possible = false;
                        break;
                    }
                    lowStr = true;
                }
                else if (ch >= 'N' && ch <= 'Z')
                {
                    if (lowStr)
                    {
                        // means not possible
                        possible = false;
                        break;
                    }
                    capStr = true;
                }
                else
                {
                    // char is not valid
                    possible = false;
                    break;
                }
            }
            if (possible)
                continue;
            else
                break;
        }
        if (possible)
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }
    return 0;
}