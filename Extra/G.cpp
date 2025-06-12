// https://vjudge.net/contest/720903#problem/G

#include <bits/stdc++.h>

int main() {
    int t;
    int a = 0;
    int b = 0;
    std::cin >> t;
    for (int i = 0;i < t;i++) {
        std::cin >> a >> b;
        std::cout << "Case " << i+1 << ": " << a + b << std::endl;
    }
}
