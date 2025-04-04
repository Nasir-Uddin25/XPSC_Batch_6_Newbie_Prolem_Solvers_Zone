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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];

        for (int i = 0; i < n; i++)
        {
            int moves;
            cin >> moves;
            string directions;
            cin >> directions;
            for (int j = moves - 1; j >= 0; j--)
            {
                if (directions[j] == 'D')
                {
                    v[i]++;
                    if (v[i] == 10)
                        v[i] = 0;
                }

                else
                {
                    v[i]--;
                    if (v[i] == -1)
                        v[i] = 9;
                }
                 
            }
        }

        for (int i = 0; i < n; i++)
            cout << v[i] << " ";

        cout << endl;
    }
    return 0;
}
