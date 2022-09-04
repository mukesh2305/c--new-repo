#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, j;
	cin >> n;

	for(int i = 2; i<=n; i++) {
		if(i == 2) {
			cout << i << " ";
			continue;
		}

		for(j = 2 ; j< i; j++) 
			if(i%j == 0) break;

		if(j == i) cout << i << " ";
	}

	return 0;
}