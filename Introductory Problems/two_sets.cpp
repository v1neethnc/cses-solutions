/*
CSES Problem Set Solutions: Two Sets
https://cses.fi/problemset/task/1092
https://github.com/v1neethnc/cses-solutions
*/

#include <iostream>
#include <vector>
using namespace std;

typedef long long int ll;

int main() {
	ll n;
	cin >> n;
	ll temp_val = n * (n+1);
	if(temp_val%4==0){
		vector<int> set1, set2;
		int val;
		if(n%4==0) {
			set1.push_back(1);
			set1.push_back(4);
			set2.push_back(2);
			set2.push_back(3);
			val = 4;
		}
		else {
			set1.push_back(1);
			set1.push_back(2);
			set2.push_back(3);
			val = 3;
		}
		for(int i=0; i<(n-1)/4; i++) {
			ll tmp = 4*i + val;
			set1.push_back(tmp + 1);
			set1.push_back(tmp + 4);
			set2.push_back(tmp + 2);
			set2.push_back(tmp + 3);
		}
		cout << "YES\n" << set1.size() << "\n";
		for(int i=0; i<set1.size(); i++)
			cout << set1[i] << ' ';
		cout << '\n' << set2.size() << '\n';
		for(int i=0; i<set2.size(); i++)
			cout << set2[i] << ' ';
	}
	else
		cout << "NO";
	return 0;
}