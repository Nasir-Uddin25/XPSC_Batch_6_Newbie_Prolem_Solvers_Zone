#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long a, b;
    cin >> a >> b;

    int cnt = 0;
    if (a < b)
    {
        for (int i = a; i <= b; i++)
            cnt++;
    }
    cout << cnt << endl;

    return 0;
}