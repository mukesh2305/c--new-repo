#include <bits/stdc++.h>
using namespace std;


int main() {
	// K. Max and Min
	int a, b, c, ma, mi;
	cin >> a >> b >> c;
	ma= max(a, b);
	ma = max(ma , c);
	mi = min(a, b);
	mi = min(mi, c);
	cout << mi << " " << ma;
	return 0;

	// if( a> b && a > c) {
	// 	max = a;
	// 	min = b < c ? b : c;
	// } else if (b > a && b > c) {
	// 	max = b;
	// 	min = a < c ? a : c;
	// } else if(c > a && c > b) {
	// 	max = c ;
	// 	min = a < b ? a : b ;
	// }
	// cout << min << " " << max ;
}