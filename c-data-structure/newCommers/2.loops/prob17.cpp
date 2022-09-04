#include <bits/stdc++.h>
using namespace std;

int main()
{
	// int n;
	// cin >> n;
	// for(int i = 1; i<=n ; i++) {
	// 	int x;
	// 	cin >> x;

	// 	while(x) {
	// 		cout << x % 10 << " ";
	// 		x /= 10;
	// 	}
	// 	cout << endl;
	// }
	// return 0;

	int n;
	cin >> n;
	for(int i = 1; i<=n;i++) {
		string number;
		cin >> number;
		int size = number.size();
		for(int j = size -1 ; j>=0; j--) {
			cout << number[j] << " ";
		}
		cout << endl;

	}
}
