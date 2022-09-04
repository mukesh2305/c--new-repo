#include <bits/stdc++.h>
using namespace std;

int main() {
	int n1, n2;

	cin >> n1 >> n2;
	int arr[n2], index;

	int arr1[n1], arr2[n2];
	for (int i = 0; i < n1; i++) {
		cin >> arr1[i];
	}

	for (int i = 0; i < n2; i++) {
		cin >> arr2[i];
	}


	for (int i = 0; i < n2; i++) {
		for (int j = 0; j < n1; j++) {
			if (arr1[j] == arr2[i]) {
				index = j;
				break;
			}
		}
		arr[i] = index;
	}

	
	// if array size is n than comparision is n -1 

	for(int i =0; i<n2 - 1; i++) {
		if(arr[i] > arr[i + 1]) {
			cout << "NO";
			return 0;
		}
	}

		cout << "YES";



}