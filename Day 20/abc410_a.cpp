//https://atcoder.jp/contests/abc410/tasks/abc410_a

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
    ll n, a, k;
    ll count = 0;
    vector<ll> v;
    cin >> n;
    for (int i = 0;i < n;i++) {
        cin >> a;
        v.push_back(a);
    } // input done

    cin >> k;
    for (int i = 0;i < n;i++) {
        if (v[i] >= k) {
            count++;
        }
    }
    cout << count << endl;







}




