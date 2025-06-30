//https://atcoder.jp/contests/abc412/tasks/abc412_b

#include <bits/stdc++.h>

using namespace std;
using pairlist = vector<pair<int, string>>;
using ll = long long;
using ld = long double;

int main(){
    #ifdef ALVI
    freopen("input.txt", "r", stdin);
    #endif

    string s, t;
    bool ans = true;

    cin >> s >> t;
    for (int i = 0;i < s.length();i++){
        if (isupper(s[i]) && i != 0){
            bool isFound = false;
            for (int j = 0;j < t.length();j++){
                if (s[i-1] == t[j]){
                    isFound = true;
                }

            }
            if (isFound) {
                ans = true;
            }
            else {
                ans = false;
                break;
            }
        }


    }
    if (ans){
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }
}
