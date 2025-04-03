#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    sort(s.begin(), s.end());
    s.erase(unique(s.begin(), s.end()), s.end()); 

    if (s[0] != 'a') { 
        cout << "a" << endl; 
        return 0;
    }

    for (int i = 0; i < s.size() - 1; i++) {
        if (s[i] + 1 != s[i + 1]) {
            cout << char(s[i] + 1) << endl;
            return 0;
        }
    }


    cout << char(s.back() + 1) << endl;  
    return 0;
}

