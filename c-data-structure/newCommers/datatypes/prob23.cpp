#include <bits/stdc++.h>
using namespace std;


int main() {
	int x , y, z;
	string s, t;

	cin >> x >> s >> y >> t >> z;

	if((s == "+") && (x+y == z)) {
		cout << "Yes" << endl;
	} else if((s == "-") && (x-y == z)) {
		cout << "Yes" << endl;
	} else if((s == "/") && (x/y == z)) {
		cout << "Yes" << endl;
	} else if((s == "*") && (x*y == z)) {
		cout << "Yes" << endl;
	}  else {
		if(s == "*") cout << x * y ;
		else if(s == "+") cout << x + y ;
		else if(s == "/") cout << x / y ;
		else if(s == "-") cout << x - y ;
	}

	return 0;
}