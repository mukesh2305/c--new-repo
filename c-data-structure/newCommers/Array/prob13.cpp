#include <bits/stdc++.h>
using namespace std;
// long long 

int main()
{
	int n, flag = 1, min , max = 0, minIndex, maxIndex;
	cin >> n;

	int arr[n];

	// for(int i = 0; i<n; i++) {
	// 	cin >> arr[i];
	// 	if(flag) {
	// 		min = arr[0];
	// 		flag =0;
	// 	}
	// 	if(arr[i] < min) {
	// 		min = arr[i];
	// 		minIndex = i;
	// 	};
	// 	if(arr[i] > max) {
	// 		max = arr[i];
	// 		maxIndex = i;
	// 	};
	// }


	// // for(int i = 0; i<n; i++) {
	// // 	if(i == minIndex) {
	// // 		// arr[i] = max
	// // 		cout << max << " ";
	// // 	}else if(i == maxIndex){
	// // 		// arr[i] = min;
 // //            cout << min << " ";
	// // 	} else {
	// // 		if(i < n - 1){

	// // 		cout << arr[i] << " ";
	// // 		} 
	// // 		if(i == n-1){
	// // 			cout << arr[i];
	// // 		}
	// // 	}
	// // }
	// arr[maxIndex] = min;
	// arr[minIndex] = max;
	// for(int i = 0; i<n; i++) {
	// 		if(i < n - 1){

	// 		cout << arr[i] << " ";
	// 		} 
	// 		if(i == n-1){
	// 			cout << arr[i];
	// 		}
	// }


		for(int i = 0; i<n; i++) {
		cin >> arr[i];
		}
		min = arr[0];

		for(int i = 0; i<n; i++) {
			if(arr[i] < min) {
				min = arr[i];
				minIndex = i;
			};
			if(arr[i] > max) {
				max = arr[i];
				maxIndex = i;
			};
		}


	arr[maxIndex] = min;
	arr[minIndex] = max;
	for(int i = 0; i<n; i++) {
		if(i < n-1){
			cout << arr[i] << " ";
		} else{
			cout << arr[i] ;

		}

	}

}