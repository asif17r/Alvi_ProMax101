// https://vjudge.net/contest/720903#problem/E

#include <bits/stdc++.h>
double formulaf(double c);
double formulac(double f);
int main() {
#ifdef ALVI

    freopen("input.txt", "r", stdin);
#endif
    double t, c, d;
    std::cin >> t;

    for (int i = 0; i < t;i++) {
        std::cin >> c >> d;
        c = formulaf(c);
        c += d;
        d = formulac(c);
        std::cout << "Case " << i+1 << ": " << std::setprecision(2) << std::fixed << d << std::endl;

    }
}
double formulaf(double c) {
    c *= 9;
    c /= 5;
    c += 32;
    return c;
}

double formulac(double f) {
    f -= 32;
    f *= 5;
    f /= 9;
    return f;
}

