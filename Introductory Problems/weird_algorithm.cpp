#include <iostream>
using namespace std;

int main() {
	long long int x;
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