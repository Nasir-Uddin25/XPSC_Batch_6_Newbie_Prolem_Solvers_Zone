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

        string s, t;
        cin >> s >> t;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'B')
                s[i] = 'G';
            if (t[i] == 'B')
                t[i] = 'G';
        }
        if (s == t)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}