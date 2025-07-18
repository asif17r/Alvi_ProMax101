/*
Given an integer n, print a centered pyramid of stars with n rows.
Each row should be centered and have an odd number of stars, forming a symmetric pyramid.

Input 1:
3
Output 1:
  *
 ***
*****



Input 2:
5
Output 2:
    *
   ***
  *****
 *******
*********



Input 3:
1
Output 3:
*



Input 4:
2
Output 4:
 *
***

Input 5:
4
Output 5:
   *
  ***
 *****
*******


*/
// Write your code below
#include <bits/stdc++.h>

int main() {
    #ifdef ALVI
        freopen("input.txt", "r", stdin);
    #endif
    int t;
    std::cin >> t;
    for (int i = 0;i < t;i++) {
        for (int j = 0;j < t-i-1;j++) {
            printf(" ");
        }
        for (int j = 0;j < i*2+1;j++) {
            printf("*");
        }
        printf("\n");
    }
}

