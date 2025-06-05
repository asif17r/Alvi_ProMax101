/*
This is an easy version of the original sum of row and column problem.

Changes from the original:
- n and m are always 5 (matrix is 5x5)

Your task:
  1. Print the sum of each row (one sum per line).
  2. Print the sum of each column (one sum per line).

Sample 1:
Matrix:
1 2 3 4 5
6 7 8 9 10
11 12 13 14 15
16 17 18 19 20
21 22 23 24 25
Output:
Row sums:
15
40
65
90
115
Column sums:
55
60
65
70
75
*****************
Sample 2:
Matrix:
0 0 0 0 0
0 0 0 0 0
0 0 0 0 0
0 0 0 0 0
0 0 0 0 0
Output:
Row sums:
0
0
0
0
0
Column sums:
0
0
0
0
0
*****************
Sample 3:
Matrix:
1 0 0 0 0
0 1 0 0 0
0 0 1 0 0
0 0 0 1 0
0 0 0 0 1
Output:
Row sums:
1
1
1
1
1
Column sums:
1
1
1
1
1
*****************
Sample 4:
Matrix:
5 4 3 2 1
1 2 3 4 5
5 4 3 2 1
1 2 3 4 5
5 4 3 2 1
Output:
Row sums:
15
15
15
15
15
Column sums:
17
16
15
16
17
*****************
Sample 5:
Matrix:
1 1 1 1 1
2 2 2 2 2
3 3 3 3 3
4 4 4 4 4
5 5 5 5 5
Output:
Row sums:
5
10
15
20
25
Column sums:
15
15
15
15
15
*/
// Write your code below for each sample by hardcoding the matrix.

#include <bits/stdc++.h>

int main() {
    freopen("input.txt", "r", stdin);
    const int n = 5;
    const int m = 5;
    int d = 0;
    int k = 0;

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
    for (int i = 0;i < n;i++) {
        for (int j = 0;j < m;j++) {
            d += arr[k][i];
            k += 1;
        }
        std::cout << d << std::endl;
        d = 0;
        k = 0;

    }


}
