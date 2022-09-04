#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;

	// for(int i = 1; i<=n; i++) {
	// 	int temp;
	// 	cin >> temp;
	// 	int binary = 0;
	// 	// decimal to binary
	// 	while(temp) {
	// 		binary = binary * 10 + temp % 2;
	// 		temp/= 2;
	// 	};
	// 	int store = 0;
	// 	int count = 0;
	// 	// removing 0 from binary number
	// 	while(binary) {
	// 		int ex = binary % 10;
	// 		if(ex) {
	// 			count++;
	// 			store = store * 10 + ex ;
	// 		}
	// 		binary /= 10;
	// 	};

	// 	// binary to decimal
	// 	int finalsum = 0;
	// 	for(int j = 0; j<count ; j++) {
	// 		finalsum = finalsum + pow(2 , j);
	// 	}

	// 	cout << finalsum << endl ; 
		
	// }


	for(int i = 1; i<=n; i++) {
		int temp;
		cin >> temp;
		int binary = 0;
		// decimal to binary and take 1 from this binary
		int count = 0;
		int store = 0;
		while(temp) {
			if(temp % 2) {
				count++;
				store = store * 10 + temp % 2 ;
			}
			temp/= 2;
		};
	

		// binary to decimal
		int finalsum = 0;
		for(int j = 0; j<count ; j++) {
			finalsum = finalsum + pow(2 , j);
		}

		cout << finalsum << endl ; 
		
	}


}