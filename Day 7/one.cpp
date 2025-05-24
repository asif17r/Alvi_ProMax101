/*
    Give an array of length n, find the sum of the elements. 

    Input:
    5
    2 3 5 2 1

    Output:
    13

    Input:
    3
    1 2 3

    Output:
    6
*/
// Alvi's Solution: 

#include <bits/stdc++.h>

int main(){
    int n;
    int num;
    int temp = 0;
    std::cin >> n;
    std::vector<int> x;
    for (int i = 0;i < n;i++){
        std::cin >> num;
        x.push_back(num);  
        // std::cout << x[i] << std::endl;      
    }
    for (int i = 0;i < x.size();i++){
        temp += x[i];
        
    }
    std::cout << temp;
}

