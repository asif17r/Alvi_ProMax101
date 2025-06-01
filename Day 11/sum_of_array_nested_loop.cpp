/*
Given a number n, take n arrays of length 7. print the sum of each array.


    Sample Input:
    2
    1 2 3 4 5 6 7
    0 0 0 0 0 0 0
    Sample Output:
    28
    0

    Sample Input:
    3
    -1 1 -2 2 -3 3 -4
    10 20 30 40 50 60 70
    5 5 5 5 5 5 5
    Sample Output:
    -4
    280
    35

    Sample Input:
    1
    100 -50 25 -25 0 0 0
    Sample Output:
    50

    Sample Input:
    4
    7 7 7 7 7 7 7
    1 1 1 1 1 1 1
    -5 -5 -5 -5 -5 -5 -5
    3 6 9 12 15 18 21
    Sample Output:
    49
    7
    -35
    84

    Sample Input:
    5
    2 4 6 8 10 12 14
    0 1 0 1 0 1 0
    -10 -20 -30 -40 -50 -60 -70
    100 0 0 0 0 0 0
    9 8 7 6 5 4 3
    Sample Output:
    56
    2
    -280
    100
    42

*/


#include <bits/stdc++.h>
//
int main() {
    freopen("input.txt", "r", stdin);
    int t, d; // t is tested case and d is the input of array
    int h = 0; // h is the sum of all numbers in x
    std::vector<int> x; // x is vector
    std::cin >> t; // taking input of test cases
    for (int i = 0;i < t;i++) { // the for loop which will run the amount of test cases
        for (int j = 0;j < 7;j++) {
            std::cin >> d;//we will take input for array
            x.push_back(d);// we will push back input into the actual array
            
        }

        for (int j = 0;j < 7;j++) {


            h += x[j]; // adding x[j] to j

        }



        std::cout << h << std::endl;
        x.clear();
        h = 0;
    }

}