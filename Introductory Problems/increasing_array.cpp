/*
CSES Problem Set Solutions: Increasing Array
https://cses.fi/problemset/task/1094/
https://github.com/v1neethnc/cses-solutions
*/

#include <iostream>
using namespace std;

typedef long long int ll;

int main() {
	ll ctr=0, n, prev, k;
	cin >> n;
	cin >> prev;
	for(int i=1; i<n; i++){
		cin >> k;
		if(prev > k) {
			int diff = prev - k;
			ctr += diff;
			prev = k + diff;
		}
		else
			prev = k;
	}
	cout << ctr;
	return 0;
}