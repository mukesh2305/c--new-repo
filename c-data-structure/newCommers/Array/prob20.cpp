#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;

	int arr[n][n];

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> arr[i][j];
		}
	}

	int sum1 = 0, sum2 = 0;
	for (int i = 0; i < n; i++) {
		for (int j = i; j <= i; j++) {
			sum1 = sum1 + arr[i][j] ;
		}
	}


	for (int i = 0; i < n; i++) {
		for (int j = n - 1 - i; j >= n - 1 - i; j--) {
			sum2 = sum2 + arr[i][j] ;
		}
	}
	cout << sum1 << " " << sum2 << endl;
	cout << abs(sum1 - sum2);

}