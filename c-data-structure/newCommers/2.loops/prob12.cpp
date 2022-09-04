#include <bits/stdc++.h>
using namespace std;

int main()
{
	// GCD 
	//  12 = 1 2 3 4 6  
	//  8  = 1 2 4 
	int a, b, maxGcd;
	cin >> a >> b;

	int n = a < b ? a : b;


	for(int i = 1 ; i<= n; i++) {
		if(a % i == 0  && b % i == 0) {
			maxGcd = i;
		}
	}
	cout << maxGcd;
	return 0;
}