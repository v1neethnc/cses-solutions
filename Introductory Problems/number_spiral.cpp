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
				res = r*r - (c-1); 
			else
				res = (r-1)*(r-1) + c;
		}
		else {
			if(c%2==0)
				res = (c-1)*(c-1) + r;
			else
				res = (c*c) - (r-1);
		}
		cout << res << '\n';
	}
	return 0;
}