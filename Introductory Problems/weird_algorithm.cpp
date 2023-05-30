/*
CSES Problem Set Solutions: Weird Algorithm
https://cses.fi/problemset/task/1068/
https://github.com/v1neethnc/cses-solutions
*/

#include <iostream>
using namespace std;

typedef long long int ll;

int main() {
	ll x;
	cin >> x;
	cout << x;
	while(x!=1){
		if(x%2==0)
			x /= 2;
		else
			x = x*3 + 1;
		cout << " " << x;
	}
	return 0;
}