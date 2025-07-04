// https://atcoder.jp/contests/abc402/tasks/abc402_b
//
#include <bits/stdc++.h>

using namespace std;
using pairlist = vector<pair<int, string>>;
using ll = long long;
using ld = long double;
int main(){
    deque<ll> dq;
    ll q, d, x;
    cin >> q;
    for (int i = 0;i < q;i++){
        cin >> d;
        if (d == 1){
            cin >> x;
            dq.push_back(x);
        }
        else {
            cout << dq.front() << endl;
            dq.pop_front();
        }
    }

}
