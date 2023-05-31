/*
CSES Problem Set Solutions: Bit String
https://cses.fi/problemset/task/1617
https://github.com/v1neethnc/cses-solutions
*/

#include <iostream>
using namespace std;

typedef long long int ll;

int main() {
	ll n, res = 1, modval = 1000000007;
	cin >> n;
	for(ll i=0; i<n; i++)
		res = (res * 2) % modval;
	cout << res;
	return 0;
}