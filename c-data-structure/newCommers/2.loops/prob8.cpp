#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, i;
	cin >> n;

	if( n == 2) {
		cout << "YES";
		return 0;
	}
	for(i = 2; i<= n -1; i++) {
		if(n  % i == 0) {
			cout << "NO";
			break;
		}
	}
	if(i == n) {
	    cout << "YES";
	}
}