#include<bits/stdc++.h>
using namespace std;

// int* bubble_sort(int arr[], int n) {
// 	int round = n - 1;

// 	for (int i = 1; i <= round; i++)
// 		for (int j = 1; j <= n - i; j++)
// 			if (arr[j] > arr[j + 1]) {
// 				int temp;
// 				temp = arr[j + 1];
// 				arr[j + 1] = arr[j];
// 				arr[j] = temp;
// 			}

// 	return arr;
// }

void binary_search(int arr [],int n,int item){
	int l = 1, h=n, m;

	while(l <= h){
		 m = (l+h)/2;
		 if(item == arr[m]){
		 	cout << "found" << endl;
		 	return ;
		 }
		 else if(item > m)
		 	l = m + 1;
		 else 
		 	h = m - 1;
	}

	cout << "not found" << endl;
}


int main()
{
	int n, t;
	cin >> n >> t;
	int arr[n], *ptr;

	for (int i = 1; i <= n; i++)
		cin >> arr[i];
	// ptr = bubble_sort(arr, n);
	sort((arr), arr + n);
	while (t--) {
		int item;
		cin >> item;
		binary_search(arr, n,item);
	}

}