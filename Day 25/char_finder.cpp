/*
Problem: Find the Character

You are given a character c and a string x. Your task is to determine whether the character c appears in the string x. If it does, print "found". Otherwise, print "not found".

Input
- The first line contains a single character c (an English letter, digit, or symbol).
- The second line contains a non-empty string x (may contain letters, digits, or symbols).

Output
- Print "found" (without quotes) if c appears in x.
- Otherwise, print "not found" (without quotes).

Examples

Sample Input 1
A
APPLE
Sample Output 1
found

Sample Input 2
a
APPLE
Sample Output 2
not found

Sample Input 3
3
123456
Sample Output 3
found

Sample Input 4
$
hello$world
Sample Output 4
found

Sample Input 5
z
codeforces
Sample Output 5
not found
*/

// DONE BRO

#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using pairlist = vector<pair<long long, string>>;
using ld = long double;

int main(){
    char c;
    string x;
    bool ans = false;
    cin >> c >> x;
    for (int i = 0;i < x.length();i++){
        if (c == x[i]){
            ans = true;
            break;
        }
        

    }
    if (ans){
        cout << "found" << endl;
    }
    else {
        cout << "not found" << endl;
    }

   
}

https://techalvi.github.io/01010011-01000001-01010110-01000101-00100000-01001101-01000101/
