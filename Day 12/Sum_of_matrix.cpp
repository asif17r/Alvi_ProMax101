/*
Given two integers n and m, then read an n-by-m grid of integers:
  • First line: n m
  • Next n lines: each line has m integers.

Your task:
  1. Print the sum of all elements in the matrix.

  Input 1:
    2 3
    1 2 3
    4 5 6
  Output 1:
    21
*****************
  Input 2:
    3 2
    7 8
    9 10
    11 12
  Output 2:
    57
*/
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int total = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            int x; cin >> x;
            total += x;
        }
    }
    cout << total << endl;
    return 0;
}
