#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int frq[26] = {0};

    for (int i = 0; i < s.size(); i++)
    {
        int index = s[i] - 'a';
        frq[index++];
    }

    for (int i = 0; i < s.size(); i++)
    {
        cout << i <<" " << frq[i] << endl;
    }

    return 0;
}