// https://codeforces.com/problemset/problem/622/B

#include <bits/stdc++.h>

using namespace std;
using pairlist = vector<pair<int, string>>;
using ll = long long;
using ld = long double;
int main(){
    string n;ll a;
    cin >> n;
    cin >> a;
    string hour = n.substr(0, 2);
    string min = n.substr(3, 2);
    ll h = stoll(hour);
    ll m = stoll(min);

    // if mins is greater than 59 mins is 00 and hour++
    // if hour is 23 hour = 00 and mins is 00
    for (int i = 0;i < a;i++){
        m += 1;
        if(m > 59){
            m = 0;
            h++;
        }
        if(h > 23){
            h = 0;
            m = 0;
        }
    }
    if (h < 10){
        cout << "0" << h << ":";
    }
    else {
        cout << h << ":";
    }
    if(m < 10){
        cout << "0" << m << endl;
    }
    else {
        cout << m << endl;
    }

}
