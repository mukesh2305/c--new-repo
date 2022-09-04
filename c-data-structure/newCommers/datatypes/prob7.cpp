#include <bits/stdc++.h>
using namespace std;

int main() {
	// G. Summation from 1 to N
	// long long  n, sum = 0;

	// cin >> n ;
	// for (int i =1 ; i<=n; i++) {
	// 	sum = sum + i;
	// }

	// cout << sum;

	// summation formula: 
	// n(n+1) / 2

	long long n;
	cin >> n;
	cout << (n*(n+1))/2;
	return 0;
}