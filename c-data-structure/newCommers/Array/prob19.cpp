#include <bits/stdc++.h>
using namespace std;

int main() {
	int n1, n2, num, count = 0;
	cin >> n1 >> n2;

	int arr[n1][n2];

	for(int i = 0; i<n1; i++) {
		for(int j = 0; j<n2; j++) {
			cin >> arr[i][j];
		}
	}

	cin >> num;
	for(int i = 0; i<n1; i++) {
		for(int j = 0; j<n2; j++) {
			if(arr[i][j] == num) {
				count = 1;
				cout << "will not take number";
				return 0;
			};
		}
	}

	if(count == 0) cout << "will take number";

}