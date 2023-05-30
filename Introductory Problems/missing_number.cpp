/*
CSES Problem Set Solutions: Missing Number
https://cses.fi/problemset/task/1083/
https://github.com/v1neethnc/cses-solutions
*/

#include <iostream>
using namespace std;

typedef long long int ll;

int main() {
	ll n, k, s=0;
	cin >> n;
	s = n*(n+1)/2;
	for(int i=1; i<n; i++) {
		cin >> k;
		s -= k;
	}
	cout << s;
	return 0;
}