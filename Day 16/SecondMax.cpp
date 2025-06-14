/*
    Given a an array, find the second max.
    Input: 
    5
    1 2 3 4 5

    Ans: 
    4

    
    Input: 
    5
    2 3 54 2 34

    Ans: 34 


*/ 


#include <bits/stdc++.h>

int main() {
#ifdef ALVI

    freopen("input.txt", "r", stdin);
#endif

    std::vector <int>x;
    long int n, c;
    std::cin >> n;
    for (int i = 0;i< n;i++) {
        std::cin >> c;
        x.push_back(c);
    }
    std::sort(x.begin(), x.end());
    for (int i  = 0;i < x.size();i++) {
        if (i == x.size()-2) {
            std::cout << x[i] << std::endl;
        }
    }






}