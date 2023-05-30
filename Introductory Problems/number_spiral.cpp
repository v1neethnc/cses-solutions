/*
CSES Problem Set Solutions: Number Spiral
https://cses.fi/problemset/task/1071/
https://github.com/v1neethnc/cses-solutions
*/

#include <iostream>
#include <cmath>
using namespace std;

typedef long long int ll;

int main() {
	ll n;
	cin >> n;
	for(int i=0; i<n; i++) {
		ll r, c, res;
		cin >> r;
		cin >> c;
		if(r>c) {
			if(r%2==0)
				res = pow(r, 2) - (c-1); 
			else
				res = pow(r-1, 2) + c;
		}
		else {
			if(c%2==0)
				res = pow(c-1, 2) + r;
			else
				res = pow(c, 2) - (r-1);
		}
		cout << res << '\n';
	}
	return 0;
}