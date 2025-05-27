/*
    https://toph.co/p/divisors
*/
#include <bits/stdc++.h>

using vector = std::vector<int>;
int main()
{
    long long num;
    vector x;
    std::cin >> num;
    std::cout << num;
    for (int i = 1; i < 100; i++){
      
        if(num % i == 0){
            x.push_back(i);
            
        }
        
    }
    for (int i = 0; i < x.size();i++){
        std::cout << i << std::endl;
    }
}