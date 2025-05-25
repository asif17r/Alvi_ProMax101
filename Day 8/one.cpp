/*
Check if a given integer x exists in a vector. Print "Found" or "Not Found".

Input format:
First line contains two integers n and x, where n is the number of elements in the vector and x is the integer to check.
Second line contains n integers, the elements of the vector.

Sample Input:
5 9
1 3 5 7 9

Output:
Found


Sample Input:
5 4
1 3 5 7 9

Output:
Not Found

Sample Input:
9 5
100 3 4 98 5 6 7 8 9

Output:
Found
*/

#include <bits/stdc++.h>
using vector = std::vector<int>;
int main()
{
    vector a;
    int n;
    int x;
    int d;
    bool t;
    std::cout << "input n" << "\n";
    std::cin >> n;
    std::cout << "input x" << "\n";
    std::cin >> x;

    for (int i =  0;i < n;i++){
        std::cin >> d;
        a.push_back(d);
        if (x == a[i]){
            t = true;
            break;
        }
        else{
            t = false;
        }        
    }
    if (t == true){
        std::cout << "FOUND";
    }
    else{
        std::cout << "NOT FOUND";
    }
    
}