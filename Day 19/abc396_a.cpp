// https://atcoder.jp/contests/abc396/tasks/abc396_a

#include <bits/stdc++.h>

using namespace std;
using pairlist = vector<pair<int, string>>;
using ll = long long;
using ld = long double;
int main() {
    ll d = 0;
    ll o = 0;
    ll n;
    #ifdef ALVI

        freopen("input.txt", "r", stdin);
    #endif
    ll t;
    bool ans = false;

    cin >> t;
    for (ll i = 0;i < t;i++) {
         // taking input of the number we will CALCULATE
         // adding the number of n
         // if o == current n d++
        cin >> n;


        if (o == n) {
            d++;


        }

        else {
            o = 0;
            d = 0;
            o += n;
        }
        if (d >= 2) {
            ans = true;
            continue;
        }
        // cout << "n: "<< n << " d:"<<" " << d << " o:"<< " "<< o << endl;

    }
    if (ans) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }

}