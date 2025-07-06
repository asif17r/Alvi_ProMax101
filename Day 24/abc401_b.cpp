// https://atcoder.jp/contests/abc401/tasks/abc401_b
//
#include <bits/stdc++.h>

using namespace std;
using pairlist = vector<pair<int, string>>;
using ll = long long;
using ld = long double;
int main(){
    ll n;
    ll c = 0;
    bool logged = false;
    cin >> n;
    for (int i = 0;i < n;i++){
        string s;
        cin >> s;
        if (!logged && s == "private"){
            c++;
        }
        if (s == "login"){
            logged = true;
        }
        if (s == "logout"){
            logged = false;
        }
    }
    cout << c << endl;

}
