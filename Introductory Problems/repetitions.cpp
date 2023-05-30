/*
CSES Problem Set Solutions: Repetitions
https://cses.fi/problemset/task/1069/
https://github.com/v1neethnc/cses-solutions
*/

#include <iostream>
using namespace std;

typedef long long int ll;

int main() {
	string str;
	cin >> str;
	int res=1, ctr=1;
	for(int i=0; i<str.length()-1; i++) {
		if(str[i] == str[i+1])
			ctr++;
		else
			ctr = 1;
		if(ctr > res)
			res = ctr;
	}
	cout << res;
	return 0;
}