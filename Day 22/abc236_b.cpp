// https://atcoder.jp/contests/abc236/tasks/abc236_b
//

#include <bits/stdc++.h>

using namespace std;
using pairlist = vector<pair<int, string>>;
using ll = long long;
using ld = long double;
int main(){
    ll n, d;
    multiset<ll> a;
    cin >> n;
    for (int i = 0;i < n*4-1;i++){
        cin >> d;
        a.insert(d);
    }
    // for (int i : a){
    //     cout << i << " ";
    // }
    // cout << endl;
    for (int i = 1;i < n+1;i++){
        if (a.count(i) != 4){
            cout << i << endl;
            break;
        }

    }




}
