
#include <bits/stdc++.h>
using namespace std;

int main()
{
	// T. Sort Numbers
	// input =  3 -2 1
	// output = -2 3 1

	long  a, b, c, max , min;
	cin >> a >> b >>c ;

	if(a >= b && a >= c) {

		max = b >= c ? b : c;
		min = b <= c ? b : c;

		cout << min << endl << max << endl<< a << endl << endl;
		cout << a << endl << b << endl<<c;

	} else if(b >= a && b >= c) {
		max = a >= c ? a : c;
		min = a <= c ? a : c;

		cout << min << endl << max << endl << b << endl << endl;
		cout << a << endl << b << endl<<c ;

	}  else if(c >= a && c >= b) {
		max = a >= b ? a : b;
		min = a <= b ? a : b;

		cout << min << endl << max << endl << c << endl << endl;
		cout << a << endl << b << endl<< c;

	}

	return 0;


}