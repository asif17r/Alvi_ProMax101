//https://atcoder.jp/contests/abc405/tasks/abc405_a

#include <bits/stdc++.h>

using namespace std;
using pairlist = vector<pair<int, string>>;
using ll = long long;
using ld = long double;
int main(){
    ll div1_s = 1600;
    ll div1_e = 2999;
    ll div2_s = 1200;
    ll div2_e = 2399;
    ll r, x;
    cin >> r >> x;

    switch (x){
        case 1:
        if (div1_s <= r && r <= div1_e){
            cout << "Yes" << endl;
        }
        else {
            cout << "No" << endl;
        }
        break;
        case 2:
        if (div2_s <= r && r <= div2_e){
            cout << "Yes" << endl;
        }
        else {
            cout << "No" << endl;
        }
        break;
    }

}
