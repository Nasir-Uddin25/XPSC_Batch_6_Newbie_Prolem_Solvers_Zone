#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<long long> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    long long sum = 0;
    int min_odd = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        sum += v[i];
      
        if (sum % 2 == 1)
        {
            min_odd = min(min_odd, v[i]);
        }

    }

  
    if (min_odd != INT_MAX && sum % 2)
    {
        sum -= min_odd;
    }

    cout << sum << endl;
    return 0;
}