#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, t;
    cin >> a >> b >> t;

    int generated_time = t / a;

    int res = generated_time * b;
    cout << res << endl;
    return 0;
}