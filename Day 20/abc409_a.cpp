//https://atcoder.jp/contests/abc409/tasks/abc409_a

#include <bits/stdc++.h>


using namespace std;
using pairlist = vector<pair<int, string>>;
using ll = long long;
using ld = long double;
int main() {
#ifdef ALVI
    freopen("input.txt", "r", stdin);
#endif
    // Ashiq WHYY U DO THIS TO ME??
    // 😭😭😭😭😭
    ll n;
    char a, t;
    vector<char> v1;
    vector<char> v2;
    bool ans = false;

    cin >> n;
    for (int i = 0;i < n;i++) {
        cin >> t;
        v1.push_back(t);
    }
    for (int i = 0;i < n;i++) {
        cin >> a;
        v2.push_back(a);
    }
    for (int i = 0;i < n;i++) {
        if (v1[i] == 'o' and v2[i] == 'o') {
            ans = true;
            break;
        }
        else{
            ans = false;
        }
    }
    if (ans) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }










}




