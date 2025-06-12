
// https://vjudge.net/contest/720903#problem/B

#include <bits/stdc++.h>

int main() {
    int t;
    const int len = 20;
    int l, w, h;
    std::cin >> t;
    for (int i = 0;i < t;i++) {
        std::cin >> l >> w >> h;
        if (l <= len && w <= len && h <= len) {
            std::cout << "Case " << i+1 << ": good" << std::endl;
        }
        else {
            std::cout << "Case " << i+1 << ": bad" << std::endl;
        }

    }


}