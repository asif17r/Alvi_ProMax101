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
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> matrix(n, vector<int>(m));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> matrix[i][j];
        }
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << matrix[i][j];
            if (j < m - 1) cout << " ";
        }
        cout << endl;
    }
    return 0;
}
