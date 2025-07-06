// https://atcoder.jp/contests/abc385/tasks/abc385_a
#include <bits/stdc++.h>

using namespace std;
using pairlist = vector<pair<int, string>>;
using ll = long long;
using ld = long double;
int main(){
    ll a, b, c;
    bool isequal = false;
    cin >> a >> b >> c;
    if (a == b && b == c){
        isequal = true;
    }
    else if (a + b == c){
        isequal = true;
    }
    else if (a + c == b){
        isequal = true;
    }
    else if (b + c == a){
        isequal = true;
    }

    if (isequal){
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }



}
