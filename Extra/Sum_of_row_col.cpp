/*
Given two integers n and m, then read an n-by-m grid of integers:
  • First line: n m
  • Next n lines: each line has m integers.

Your task:
  1. Print the sum of each row (one sum per line).
  2. Print the sum of each column (one sum per line).

  Input 1:
    3 4
    1  2  3  4
    5  6  7  8
    9 10 11 12
  Output 1:
    Row sums:
    10
    26
    42
    Column sums:
    15
    18
    21
    24
*****************
  Input 2:
    1 5
    10 20 30 40 50
  Output 2:
    Row sums:
    150
    Column sums:
    10
    20
    30
    40
    50
*****************
  Input 3:
    4 1
    7
    -3
    0
    2
  Output 3:
    Row sums:
    7
    -3
    0
    2
    Column sums:
    6
*****************
  Input 4:
    2 3
    0 0 0
    0 0 0
  Output 4:
    Row sums:
    0
    0
    Column sums:
    0
    0
    0
*****************
  Input 5:
    3 2
    -1 5
    -2 -3
    4 -4
  Output 5:
    Row sums:
    4
    -5
    0
    Column sums:
    1
    -2
*****************
  Input 6:
    4 5
    1 2 3 4 5
    10 20 30 40 50
    -1 -2 -3 -4 -5
    100 0 -100 50 -50
  Output 6:
    Row sums:
    15
    150
    -15
    0
    Column sums:
    110
    20
    -70
    90
    0
*/
// MY CODE
#include <bits/stdc++.h>

int main() {
    freopen("input.txt", "r", stdin);
    int n;
    int m;
    int d = 0;
    int k = 0;
    std::cin >> n >> m;
    int arr[n][m];
    for (int i = 0;i < n;i++) {
        for (int j = 0;j < m;j++) {
            std::cin >> arr[i][j];
        }
    }
    std::cout << "Row sums: " << std::endl;
    for (int i = 0;i < n;i++) {
        for (int j = 0;j < m;j++) {
            d += arr[i][j];


        }
        std::cout << d << std::endl;
        d = 0;
    }
    d = 0;
    std::cout << "Column sums:" << std::endl;
    for (int i = 0;i < m;i++) {
        for (int j = 0;j < n;j++) {
            d += arr[k][i];
            k += 1;

        }
        std::cout << d << std::endl;
        d = 0;
        k = 0;

    }
