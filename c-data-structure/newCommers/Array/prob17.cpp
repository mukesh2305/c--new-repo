#include <bits/stdc++.h>
using namespace std;
// long long 

int main()
{
	int t, count;
	cin >> t;

	while(--t) {
		count = 0;
		int n;
		cin >> n;
		int arr[n];
		for(int i = 0; i<n; i++) {
			cin >> arr[i];
		}

			int maximum = INT_MIN;
		for(int i = 0; i<n;i++) {
			for(int j = i; j<n; j++) {
				if(maximum < arr[j]) {
					maximum = arr[j];
					count++;
				}
			}
		} 
		cout << endl;
	}
	cout << count;
}