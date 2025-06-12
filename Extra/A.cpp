// https://vjudge.net/contest/720903#problem/A

#include <bits/stdc++.h>

int main() {
    int t, a, b;
    std::cin >> t;
    for (int i = 0;i < t;i++) {
        std::cin >> a >> b;
        if (a > b) {
            std::cout << ">" << std::endl;
        }
        else if (a < b) {
            std::cout << "<" << std::endl;
        }
        else {
            std::cout << "=" << std::endl;
        }
    }


}