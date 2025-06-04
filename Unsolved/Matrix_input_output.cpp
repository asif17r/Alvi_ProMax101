/*
Given two integers n and m, then read an n-by-m grid of integers:
  • First line: n m
  • Next n lines: each line has m integers.

Your task:
  1. Output the matrix in the same format as input.

  Input 1:
    2 3
    1 2 3
    4 5 6
  Output 1:
    1 2 3
    4 5 6
*****************
  Input 2:
    3 1
    7
    8
    9
  Output 2:
    7
    8
    9
*****************
  Input 3:
    1 4
    10 20 30 40
  Output 3:
    10 20 30 40
*/

// ------------------------------------------------------ //
// Is this good
#include <bits/stdc++.h>

int main() {
    int n, m;

    std::cin >> n >> m;
    int arr[n][m];
    for (int i = 0;i < n;i++) {
        for (int j = 0;j < m;j++) {
            std::cin >> arr[i][j];
        }

    }
    for (int i = 0;i < n;i++) {
        for (int j = 0;j < m;j++) {
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;

    }

}
