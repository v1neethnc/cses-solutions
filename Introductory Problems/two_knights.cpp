/*
CSES Problem Set Solutions: Two Knights
https://cses.fi/problemset/task/1072
https://github.com/v1neethnc/cses-solutions
*/

#include <iostream>
using namespace std;

typedef long long int ll;

int main() {
	ll n;
	cin >> n;
	for(int i=1; i<=n; i++) {
		// https://math.stackexchange.com/questions/3266257/number-of-ways-two-knights-can-be-placed-such-that-they-dont-attack/
		ll att_count = 4 * (i-1) * (i-2);
		ll tm = i*i;
		ll total = tm * (tm - 1) / 2;
		cout << total - att_count << '\n';
	}
	return 0;
}