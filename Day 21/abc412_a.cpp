// https://atcoder.jp/contests/abc412/tasks/abc412_a

#include <iostream>
#include <vector>

using ll = long long;
using namespace std;
int main(){
	ll n;
	ll counter = 0;
	ll a, b;
	cin >> n;
	for (int i = 0;i < n;i++){
		cin >> a >> b;
		if (a < b){
			counter++;
		}
	}
	cout << counter << endl;
}