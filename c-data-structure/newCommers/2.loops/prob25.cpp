#include <bits/stdc++.h>
using namespace std;

int main()
{

	int n;
	int a = -1, b = 1,c = 0;
	cin>> n;

	// -1 1 = 0
	// 1 0
	for(int i = 1; i<=n; i++) {
		c = a + b;
		cout << c << " ";
		a = b;
		b = c;

	}


}