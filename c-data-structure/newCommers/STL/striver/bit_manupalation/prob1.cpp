// // reverse array
// #include <bits/stdc++.h>
// using namespace std;

// // void rev(int arr[], int n, int st) {
// // 	if(st == n/2) return;
// // 	swap(arr[st], arr[n - 1 - st]);
// // 	rev(arr, n, ++st);
// // }


// void rev(int arr[], int end, int start) {
// 	if(start >= end) return;
// 	int temp = arr[start];
// 	arr[start] = arr[end];
// 	arr[end] = temp;

// 	rev(arr, end - 1 , start + 1);
// }
// int main() {
// 	int t ;
// 	int n;
// 	cin >> t >> n;
// 	int arr[n];
// 	while(t--) {
// 		for(int i = 0; i<n; i++) cin >> arr[i];
// 		// reverse(arr, arr+n);  // using reverse function
// 			rev(arr, n -1 , 0);  // using recursion
// 			// for(int i = 0; i<ceil(n/2);i++) {  // n/2 method
// 			// 	swap(arr[i], arr[n - 1 - i]);
// 			// }

// 			for(int i = 0; i<n; i++){
// 				// if(i == n - 1 ) cout << arr[i];
// 				// else cout << arr[i] << " ";
// 				cout << arr[i] << " ";
// 			}

// 	}
// }

#include <bits/stdc++.h>
using namespace std;
void reverse_array(int arr[], int n)
{
 
    // Reverse array in simple manner
    for (int i = 0; i < n / 2; i++)
 
        // Swap ith index value with (n-i-1)th
        // index value
        // Note : A - B = A + ~B + 1
        // So n - i = n + ~i + 1 then
        // n - i - 1 = (n + ~i + 1) + ~1 + 1
        swap(arr[i], arr[(n + ~i + 1) + ~1 + 1]);
}
int main() {
	int t ;
	int n;
	cin >> t >> n ;
	int arr[n];
	while(t--) {
	for(int i = 0; i<n; i++) {
	    cin >> arr[i];
	}
	
	reverse_array(arr, n);
	
	for(int i = 0;i<n; i++) {
	    cout << arr[i] << " " ;
	}
	}
	return 0;
	
}