// https://vjudge.net/contest/720903#problem/F

#include <bits/stdc++.h>

int main() {
#ifdef ALVI

    freopen("input.txt", "r", stdin);
#endif
    int t;

    std::cin >> t;
    long long a, b, c;
    bool o = false;
    for (int i = 0;i < t;i++) {
        std::cin >> a >> b >> c;
        if ((a + b) > c) {
            if ((b + c) > a) {
                if ((c + a) > b) {
                    o = true;
                }else {
                    o = false;
                }
            }else {
                o = false;
            }
        }else {
            o = false;
        } 
        if(a <= 0 || b <= 0 || c <= 0) {
            o = false;
        }
        if (o) {
            if (a == b && b == c) {
                std::cout << "Case " << i + 1 << ": Equilateral";
            }
            else if (a == b || a == c || b == c) {
                std::cout << "Case " << i + 1 << ": Isosceles";
            }
            else {
                std::cout << "Case " << i + 1 << ": Scalene";
            }
        }
        if (!o) {
            std::cout << "Case " << i + 1 << ": Invalid";
        }
        std::cout << std::endl;
    }
}