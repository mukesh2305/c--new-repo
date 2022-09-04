#include <bits/stdc++.h>
using namespace std;
// vod bubble_sort(int )
// long long 

int * bubble_sort(int arr[], int n){
		for(int i =1; i<= n-1; i++) {
			for(int j = 0; j<n-i; j++) {
				if(arr[j] > arr[j + 1]){
					int temp ;
					temp = arr[ j + 1];
					arr[j+1] = arr[j];
					arr[j] = temp;
				}
			}		
		}
		return arr;
	}
int main()
{
	int n, count = 0;
	cin >> n;
	int arr1[n];
	int arr2[n];
	int *ptr1, *ptr2;

	for(int i =0; i<n; i++) {
		cin >> arr1[i];

	}

	for(int i =0; i<n; i++) {
		cin >> arr2[i];
	}
ptr1 = bubble_sort(arr1, n);
ptr2 = bubble_sort(arr2, n);
for(int i = 0; i<n; i++) {
	if(ptr1[i] == ptr2[i]) {
		count++;
	}
}

if(count == n) {
	cout << "yes";
} else cout << "no";


}