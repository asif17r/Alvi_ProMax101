/*
Given two integers n and m, then read an n-by-m grid of integers:
  • First line: n m
  • Next n lines: each line has m integers.

Your task:
  1. Print the maximum element in each row (one per line).

  Input 1:
    2 3
    1 2 3
    4 5 6
  Output 1:
    3
    6
*****************
  Input 2:
    3 2
    7 8
    9 10
    11 12
  Output 2:
    8
    10
    12
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; ++i) {
        int mx = -1e9;
        for (int j = 0; j < m; ++j) {
            int x; cin >> x;
            mx = max(mx, x);
        }
        cout << mx << endl;
    }
    return 0;
}
