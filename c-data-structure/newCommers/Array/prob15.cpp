#include <bits/stdc++.h>
using namespace std;
// long long 

int main()
{
	long long n, num;
	cin >> n;
	long long a = 0 ,  b = 1;

	// for(int i = 0; i<n; i++) {
	// 	num = a+b;
	// 	a = b;
	// 	b = c;
	// 	num = c;
	// }
	// cout << num;
	if(n == 1) {
		cout << a ;

	}else if(n == 2) {
		cout << b;
	} else {
		for(int i = 3; i<=n; i++) {
			num = a+b;
			a = b;
			b = num;
			// num = c;
		}
		cout << num;
	
	}
}