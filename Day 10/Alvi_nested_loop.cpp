#include <bits/stdc++.h>

int main(){
    int n; 
    std::cin >> n;
    std::string name = "Alvi";

    for(int i = 0; i < n; i++){
        std::cout << i+1 << " ";
        for(int j = 0; j < n; j++){
            std::cout << name << " ";
        }
        std::cout << std::endl;
    }
    
}