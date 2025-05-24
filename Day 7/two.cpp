/*
    Given an array of lenght n, find the minimum element in the array.

    Input:
    5
    2 3 5 2 1
    Output:
    1

    Input:
    7 
    34 12 45 67 23 89 23

    Output:
    12
*/

// Partially written by AI 
#include <bits/stdc++.h>

int main(){
    int n;
    std::cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++){
        std::cin >> arr[i];
    }

    int minElement = arr[0];
    for(int i = 0; i < n; i++){
        //update the minimum element 
        if(arr[i] < minElement){
            minElement = arr[i];
        }
    }
    std::cout << minElement << std::endl;
}