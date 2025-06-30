// https://atcoder.jp/contests/abc394/tasks/abc394_b

#include <bits/stdc++.h>

using namespace std;
using pairlist = vector<pair<int, string>>;




int main() {
    #ifdef ALVI

        freopen("input.txt", "r", stdin);
    #endif
    pairlist p;
    string w;
    long long t;
    cin >> t;
    for (int i =0;i < t;i++) {
        string s;
        cin >> s;
        p.push_back({s.length(), s});

    }
    sort(p.begin(), p.end());
    for (int i = 0;i < p.size();i++) {
        // cout << p[i].first << " " << p[i].second << endl;
        w += p[i].second;
    }
    cout << w << endl;

}