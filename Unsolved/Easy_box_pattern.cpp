/*
Box Pattern

Given two integers n and m, print a box pattern using '-' for horizontal borders 
and '|' for vertical borders, with spaces inside.

Input 1:
3 4
Output 1:
----
|  |
----
*****************
Input 2:
2 2
Output 2:
--
--
*****************
Input 3:
4 3
Output 3:
---
|  |
|  |
---
*****************
Input 4:
3 3
Output 4:
---
| |
---
*****************
Input 5:
5 6
Output 5:
------
|    |
|    |
|    |
------
*/
// Write your code below
#include <bits/stdc++.h>

int main() {
#ifdef ALVI

    freopen("input.txt", "r", stdin);
#endif

    long long n, m;
    std::cin >> n >> m;
    n -= 2;
    for (int i = 0;i < m;i++) {
        printf("-");

    }
    printf("\n");
    for (int i = 1;i < n*2+1;i++) {
        printf("|");
        for (int j = 0;j< n+1;j++) {
            printf(" ");
        }
        if (i%2==0) {
            printf("\n");
        }
    }
    // printf("\n");
    for (int i = 0;i < m;i++) {
        printf("-");

    }






}

