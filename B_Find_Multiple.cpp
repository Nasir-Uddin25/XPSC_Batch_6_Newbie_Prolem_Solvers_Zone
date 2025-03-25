#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    for (int i = 1; ; i++)
    {
        int mul = c * i;
        if (mul >= a && mul <= b)
        {
            cout << mul << endl;
            break;
        }

        if (mul > b)
        {
            cout << -1 << endl;
            break;
        }
    }
    return 0;
}
