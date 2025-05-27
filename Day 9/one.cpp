/*
    https://codeforces.com/gym/105747/problem/A
*/

#include <iostream>

int num_of_juices(int O, int M);
int main()
{
    int M, O;
    std::cin >> M;
    std::cin >> O;
    int num = num_of_juices(M, O);
    std::cout << num;

    return 0;
}

int num_of_juices(int O, int M){
    int min = std::min(M, O);
    return min;
}