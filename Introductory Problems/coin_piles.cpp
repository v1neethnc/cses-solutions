/*
CSES Problem Set Solutions: Coin Piles
https://cses.fi/problemset/task/1754
https://github.com/v1neethnc/cses-solutions
*/

#include <iostream>
using namespace std;

typedef long long int ll;

int main() {
	ll n, a, b;
	cin >> n;
	for(int i=0; i<n; i++) {
		cin >> a;
		cin >> b;
		if((a+b)%3==0 and 2*a>=b and 2*b>=a)
			cout << "YES\n";
		else
			cout << "NO\n";
	}
	return 0;
}