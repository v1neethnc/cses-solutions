/*
CSES Problem Set Solutions: Trailing Zeros
https://cses.fi/problemset/task/1618
https://github.com/v1neethnc/cses-solutions
*/

#include <iostream>
using namespace std;

typedef long long int ll;

int main() {
	ll n, zero_ctr = 0, five_base = 5;
	cin >> n;
	while(n/five_base >= 1) {
		zero_ctr += n / five_base;
		five_base *= 5;
	}
	cout << zero_ctr;
	return 0;
}