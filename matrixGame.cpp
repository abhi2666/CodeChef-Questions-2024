#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<int> mat;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                int a;
                cin >> a;
                mat.push_back(a);
            }
        }
        // sort the single array
        sort(mat.begin(), mat.end(), greater<int>());
        // now pick optimally
        int cyborg = 0, geno = 0;
        // now alternatievly pick elements for both
        for (int i = 0; i < mat.size(); i++)
        {
            if (i % 2 == 0)
                cyborg += mat[i];
            else
                geno += mat[i];
        }
        if (cyborg > geno)
            cout << "Cyborg" << endl;
        else if (geno > cyborg)
            cout << "Geno" << endl;
        else
            cout << "Draw" << endl;
    }
}
