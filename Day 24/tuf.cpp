// https://atcoder.jp/contests/abc389/tasks/abc389_b
//
#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using pairlist = vector<pair<long long, string>>;
using ld = long double;

long long fact(long long n){
    long long result = 1;
    for (int i = 2;i <= n;i++){
        result = result * i;
    }
    return result;
}

int main(){
    ll x;
    cin >> x;
    for (int i = 1;i < 21;i++){
        if (fact(i) == x){
            cout << i << endl;
            break;
        }
    }
}
