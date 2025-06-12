// https://vjudge.net/contest/720903#problem/H


#include <bits/stdc++.h>

int main() {
#ifdef ALVI

    freopen("input.txt", "r", stdin);
#endif
    long long t, a, b, c;

    std::cin >> t;
    for (int i = 0;i < t;i++) {
        std::cin >> a >> b >> c;
        bool h = 0;
        if (a*a + b*b == c*c) {
            h = 1;
        }
        else if (a*a + c*c == b*b){
            h = 1;
        }
        else if (b*b + c*c == a*a) {
            h = 1;
        }

        if (h) {
            printf("Case %d: yes\n", i+1);
        }
        else {
            printf("Case %d: no\n", i+1);
        }
    }
}
