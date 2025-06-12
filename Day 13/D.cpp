// https://vjudge.net/contest/720903#problem/D

#include <bits/stdc++.h>

int main() {
    #ifdef ALVI

    freopen("input.txt", "r", stdin);
    #endif

    std::string s;
    int i = 0;
    do {
        std::getline(std::cin >> std::ws, s);
        i += 1;
        if (s == "#") {
            break;
        }
        else if (s == "HELLO") {
            std::cout << "Case " << i << ": " << "ENGLISH" << std::endl;
        }
        else if (s == "HOLA") {
            std::cout << "Case " << i << ": " << "SPANISH" << std::endl;
        }
        else if (s == "HALLO") {
            std::cout << "Case " << i << ": " << "GERMAN" << std::endl;
        }
        else if (s == "BONJOUR") {
            std::cout << "Case " << i << ": " << "FRENCH" << std::endl;
        }
        else if (s == "CIAO") {
            std::cout << "Case " << i << ": " << "ITALIAN" << std::endl;
        }
        else if (s == "ZDRAVSTVUJTE") {
            std::cout << "Case " << i << ": " << "RUSSIAN" << std::endl;
        }
        else {
            std::cout << "Case " << i << ": " <<  "UNKNOWN" << std::endl;
        }
    }while (s != "#");

}