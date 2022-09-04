#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, low = 0;
	cin >> n;
	int arr[n];

	for(int i = 0; i<n; i++) {
		cin >> arr[i];
	}

	low = arr[0];
	for(int i = 1; i<n;i++) {
		if(arr[i] < low) {
			low = arr[i];
		}
	}

	for(int i = 0; i<n; i++) {
		if(arr[i] == low) {
			cout << arr[i] << " " <<  i + 1;
			break;
		}
	}

	// ------------------------------------------------------------------------------

	// for(int i = 0; i<n; i++) {
	// 	cin >> arr[i];
	// 	low = arr[0];
	// 	if(arr[i] < low) {
	// 		low = arr[i];
	// 	}
	// }


	// for(int i = 0; i<n; i++) {
	// 	if(arr[i] == low) {
	// 		cout << arr[i] << " " <<  i + 1;
	// 		break;
	// 	}
	// }
}