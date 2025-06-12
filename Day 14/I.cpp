// https://vjudge.net/contest/720903#problem/I


#include <bits/stdc++.h>

int main() {
#ifdef ALVI

    freopen("input.txt", "r", stdin);
#endif
    int t;
    int a = 0;
    int b = 0;
    int c = 0;
    int n;
    std::vector<int> x;
    std::cin >> t;

    for (int i = 0;i < t;i++) {
        std::cin >> n;
        for (int j = 0;j < n;j++) {
            std::cin >> a;
            x.push_back(a);
        }


        if (x.size() == n) {

            for (int j = 0;j < x.size()-1;j++) {

                    if (x[j] > x[j+1]) {
                        c += 1;
                    }
                    else if (x[j] < x[j+1]) {
                        b += 1;
                    }
                    else if (x[j] == x[j+1]) {
                        a += 0;
                        b += 0;
                    }


            }
        }

        std::cout << "Case " << i+1 << ": " << b << " " << c << std::endl;
        x.clear();
        b = 0;
        c = 0;
    }
}
