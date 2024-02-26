#include <iostream>
using namespace std;

// This function iterates through the string starting from the second character.
// The 'curr' parameter determines the first character of the resulting string.
int solve(string &s, int curr)
{
    int cntOnes = curr; // Initialize cntOnes with the value of curr because it is the first character of X.
    for (int i = 1; i < s.size(); i++) // Start from the second character of S.
    {
        curr = curr ^ (s[i - 1] - '0'); // Use the previous character in S for the XOR operation.
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
        // Calculate the number of ones for both possible starting values of X (0 and 1).
        int firstZero = solve(s, 0);
        int firstOne = solve(s, 1);
        // Output the maximum of the two calculations.
        cout << max(firstZero, firstOne) << endl;
    }
    return 0;
}