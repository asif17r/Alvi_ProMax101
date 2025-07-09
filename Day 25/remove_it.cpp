//https://atcoder.jp/contests/abc191/tasks/abc191_b

#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using pairlist = vector<pair<long long, string>>;
using ld = long double;

int main(){
    ll n, x, a;
    cin >> n >> x;
    vector<ll> v;
    for (int i = 0;i < n;i++){
        cin >> a;
        if (a == x){
            continue;
        }
        else {
            v.push_back(a);
        }

    }
    for (int i : v){
        cout << i << " ";
    }
    cout << endl;


}
