//https://atcoder.jp/contests/abc413/tasks/abc413_a


#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using pairlist = vector<pair<long long, string>>;
using ld = long double;


int main(){
    ll n, m, a;
    ll c = 0;
    cin >> n >> m;
    for (int i = 0;i < n;i++){
        cin >> a;
        c += a;
    }
    if (c <= m){
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }

}
