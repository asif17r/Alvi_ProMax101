/*
Given an integer n, print a right-angled triangle of stars with n rows.
Each row i (1-based) should have exactly i stars, separated by spaces.

Input 1:
3
Output 1:
*
* *
* * *
*****************
Input 2:
5
Output 2:
*
* *
* * *
* * * *
* * * * *
*/
// Write your code below
#include <bits/stdc++.h>

int main() {
    freopen("input.txt", "r", stdin);
    int t;
    std::cin >> t;
    for (int i = 1;i <= t;i++) {
        for (int j = 1;j <= i;j++) {
            std::cout << "* ";
        }
        std::cout << std::endl;
    }


}
