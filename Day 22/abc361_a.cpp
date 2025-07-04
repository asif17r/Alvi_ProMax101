//https://atcoder.jp/contests/abc361/tasks/abc361_a
#include <bits/stdc++.h>
using namespace std;
using pairlist = vector<pair<int, string>>;
using ll = long long;
using ld = long double;
int main(){
    vector<ll> a;
    ll n, k, x, d;
    cin >> n >> k >> x;

    for (int i = 0;i < n;i++){
        cin >> d;
        a.push_back(d);
    }
    a.insert(a.begin() + k, x);
    for (int i : a){
        cout << i <<" ";
    }
    cout << endl;



}
