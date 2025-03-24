#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    int val = 2 * c;

    if (val >= a && val <= b)
    {
        for (int i = a; i <= b; i++)
        {
            if (i == val)
            {
                cout << i << endl;
            }
        }
    }
    else
        cout << -1 << endl;
    return 0;
}