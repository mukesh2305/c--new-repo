#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a, b, count = 0;
	cin >> a >> b;

	for(int i = a; i<=b; i++) {
		int temp = i;
		while(temp>= 10) {
			temp /= 10;
		}

		if((temp / 7 == 1 && temp%7 == 0) || (temp / 4 == 1 && temp % 4 == 0)) {
			cout << i << " ";
			count = 1;
		}
	}
	if(count == 0) cout << -1;
	return 0;
}