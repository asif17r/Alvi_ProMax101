// https://atcoder.jp/contests/abc413/tasks/abc413_b

#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using pairlist = vector<pair<long long, string>>;
using ld = long double;


int main(){

    ll n;
    ll c = 0;
    cin >> n;
    set<string> set1;
    deque<string> dq;
    for (int i = 0;i < n;i++){
        string s;
        cin >> s;
        dq.push_back(s);
    }
    for (int i = 0;i < dq.size();i++){
        for (int j = 0;j < dq.size();j++){
            if (i == j){
                continue;
            }
            string n = dq[i] + dq[j];
            set1.insert(n);

        }
    }
    cout << set1.size() << endl;

}
