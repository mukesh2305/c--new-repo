#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, i = 1;
	cin >> n;
	if(n == 1) {
		cout << -1 ;
		return 0;
	}
	while( i <= n) {
		if(i%2 == 0) {
			cout << i << endl;
		}
		i++;
	}


}