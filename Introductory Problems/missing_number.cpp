#include <iostream>
using namespace std;

int main() {
	long long int n, k, s=0;
	cin >> n;
	s = n*(n+1)/2;
	for(int i=1; i<n; i++) {
		cin >> k;
		s -= k;
	}
	cout << s;
	return 0;
}