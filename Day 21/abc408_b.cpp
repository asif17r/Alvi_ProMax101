// https://atcoder.jp/contests/abc408/tasks/abc408_b


#include <bits/stdc++.h>

using namespace std;
using pairlist = vector<pair<int, string>>;
using ll = long long;
using ld = long double;
int main(){
    ll n, a;
    set<ll> s;
    cin >> n;
    for (int i = 0;i < n;i++){
        cin >> a;
        s.insert(a);
    }
    cout << s.size() << endl;
    for (ll x : s){
        cout << x << ' ';
    }
    cout << endl;

}
