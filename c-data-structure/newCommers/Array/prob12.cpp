#include <bits/stdc++.h>
using namespace std;
// long long 

int main()
{
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int arr[n];
		for(int i = 0; i<n; i++) {
			cin>> arr[i];
		}

		for(int i = 0; i<n; i++) {
			int maximum = INT_MIN;
			// cout << "maximum " << maximum << endl; 
			for(int j = i; j<n; j++) {
				maximum = max(maximum, arr[j]);
				cout << maximum << " ";
			}
			// cout << endl;
		}
		cout << endl;
	}
}