#include <bits/stdc++.h>
using namespace std;

int main()
{
	// int n, flag;
	
	// cin >> n;
	// for(int i = 1; i<=n; i++) {
	// flag = 0;
	// 	for(int j = 1; j<= (n*2-1); j++) {
	// 		if(j >= 5 - i && j <= 3 + i) {
	// 			cout << "*";
	// 			flag = 1;
	// 		}
	// 		else {
	// 			if(flag ==  0) {
	// 			cout << " ";
	// 			}

	// 		}
	// 	}
	// 	cout << endl;
	// }

// ---------------------------------------------------------------------
	// int n;
	
	// cin >> n;
	// for(int i = 1; i<=n; i++) {
	// 	for(int j = 1; j<= 4-i ; j++) {
	// 		cout << " ";
	// 	}

	// 	for(int k = 5 - i; k <= 3 + i; k++) {
	// 		cout << "*";
	// 	}
	// 	cout << endl;
	// }
	// ----------------------------------------------------------------------
	int n, spaces;
	
	cin >> n;
	spaces = n - 1; 
	for(int i = 1; i<=n; i++) {
		for(int j = 1; j<= spaces ; j++) {
			cout << " ";
		}

		for(int k = 1; k < i*2; k++) {
			cout << "*";
		}
		spaces--;
		cout << endl;
	}
}