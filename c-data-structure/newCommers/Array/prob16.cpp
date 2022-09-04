#include <bits/stdc++.h>
using namespace std;
// long long 

int main()
{
	int n, count, oper = 0;
	cin >> n;

	int arr[n];

	for(int i = 0; i<n; i++) {
		cin >> arr[i];
		if(arr[i] % 2 != 0) {
			cout << oper;
			return 0;
		};
	}


	
	for(int i = 0; i<n; i++) {
		count = 0;
		for(int j = i; j<n; j++){
			if(arr[j]%2 == 0) {
				arr[j] = arr[j]/2;
				count++;
			} else{
				break;
			}
		}
		if(count == n) {
			 i = -1;
			 oper++;
		} 
	}

	cout << oper ;
}