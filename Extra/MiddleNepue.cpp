/*
Problem: https://judge.beecrowd.com/en/problems/view/3301
*/

#include <bits/stdc++.h>
#include <cmath>
double getMiddleNumber(std::vector<int> vec) {
    std::sort(vec.begin(), vec.end()); // Sort the vector

    int size = vec.size();
    if (size % 2 == 0) { // Even size
        return round(double(vec[size / 2 - 1] + vec[size / 2]) / 2.0);
    } else { // Odd size
        return vec[size / 2];
    }
}



int main(){
    int h, z, l;
    std::vector<int> k;
    std::cin >> h >> z >> l;
    k.push_back(h);
    k.push_back(z);
    k.push_back(l);
    if (getMiddleNumber(k) == h) {
        std::cout << "huguinho" << std::endl;
    }
    else if (getMiddleNumber(k) == l) {
        std::cout << "luisinho" << std::endl;
    }
    else {
        std::cout << "zezinho" <<  std::endl;
    }




}
