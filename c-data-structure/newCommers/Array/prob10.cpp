#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, flag = 1, min, count = 0;
	cin >> n;
	int arr[n];

	for(int i = 0; i<n; i++) {
		cin >> arr[i];
		if(flag) {
			min = arr[0];
			flag = 0;
		}

		if(arr[i] < min) {
			min = arr[i];
		}
	}

	for(int i = 0; i<n; i++) {
		if(arr[i] == min) {
			count++;
		}
	}
	if(count % 2 != 0) cout << "Lucky";
	else cout << "Unlucky";
}