#include <iostream>
using namespace std;

int solve(string &s, int curr)
{
    int cntOnes = curr;
    for (int i = 0; i < s.size()-1; i++)
    {
        curr = curr ^ (s[i] - '0');
        if (curr == 1)
            cntOnes++;
    }
    return cntOnes;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int firstZero = solve(s, 0);
        int firstOne = solve(s, 1);
        cout << max(firstZero, firstOne) << endl;
    }
    return 0;
}