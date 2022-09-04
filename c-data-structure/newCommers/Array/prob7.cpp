#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, count = 0;
	cin >> n;
	int arr[n];
	for(int i = 0; i<n; i++) {
		cin >> arr[i];
	}

	for(int i = n - 1, j = 0; i>=0, j < n; i--, j++) {
		if(arr[i] === arr[j]) {
			count++;
		}
	}

	if(count == n) {
		cout << "YES";
	} else {
		cout << "NO";
	} 

}