#include <bits/stdc++.h>
using namespace std;


int main() {
	// H. Two numbers
	// Your ceil won't work for x=0,
	// Better use this: (x+y-1)/y
	// in the case floor ceil and round use double istance of int and float;
	double a, b;
	double c;
	cin >> a >>  b;
	c = double(a/b);
	cout << "floor "<< a << " / " << b << " = " << floor(c)  << endl;
	cout << "ceil "<< a << " / " << b << " = " << ceil(c) << endl;
	cout << "round "<< a << " / " << b << " = " << round(c) << endl;

	return 0;
}