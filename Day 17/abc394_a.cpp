// Problem: https://atcoder.jp/contests/abc394/tasks/abc394_a

#include <bits/stdc++.h>

using namespace std;
int main() {
#ifdef ALVI

    freopen("input.txt", "r", stdin);
#endif
    string s;
    cin >> s;
    for (int i = 0;i < s.length();i++) {
        if (s[i] != '2') {
            i++;
            if (s[i] == '2') {
                cout << s[i];
            }

        }
        else {
            cout << s[i];
        }
    }

}