/*
    Problem Link: https://judge.beecrowd.com/en/problems/view/3342
*/
#include <bits/stdc++.h>


int main() {

    int n;
    int white = 0;
    int black = 0;
    std::vector<int> a;
    std::vector<int>b;
    std::cin >> n;
    n = n * n;
    if (n % 2 == 0){
        n /= 2;
        white += n;
        black += n;
    }
    else {

        white = ceil((double)n / 2.0);
        black = floor((double)n / 2.0);
    }

    std::cout << white << " casas brancas e " << black << " casas pretas" << std::endl;
    return 0;
}
