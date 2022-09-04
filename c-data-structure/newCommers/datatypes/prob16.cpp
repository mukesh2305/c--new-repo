#include <bits/stdc++.h>
using namespace std;

int main()
{
	// P. First digit !
	int a;
	cin >> a;
	if((a/1000) % 2 == 0) {
		cout << "EVEN";
	} else {
		cout << "ODD";
	}
	return 0;
}