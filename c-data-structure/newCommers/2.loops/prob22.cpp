#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, j;
	cin >> n;

		for(j = 1; j <= n*4 ; j++) {
			if(j % 4 == 0) {
				cout << "PUM" << endl;
				continue;
			}
			cout << j << " ";
		}
	return 0;
}