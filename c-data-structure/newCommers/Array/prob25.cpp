#include<bits/stdc++.h>
using namespace std;
int main()
{
	// long long n1, t;
	// cin >> n1 >> t;
	// long long arr[n1], sum = 0, summation[n1];

	// for (int i = 1; i <= n1; i++) {
	// 	cin >> arr[i];
	// 	sum = sum + arr[i];
	// 	summation[i] = sum;

	// }

	// while (t--) {
	// 	sum = 0;
	// 	int q1, q2;
	// 	cin >> q1 >> q2;
	// 	if(q1 == 1) {
	// 		cout << summation[q2] << endl;
	// 		continue;
	// 	}
	// 	for (int i = q1; i <= q2; i++) {
	// 		sum = sum + arr[i];
	// 	}
	// 	cout << sum << endl;
	// }


	// ===================================================

	// long long size,range;
	// cin>>size>>range; // 3
	// long long arr1[size]; // 6 4 2 7 2 7
	// long long summation[size]; // 6 10 12 
	// for(int i=0;i<size;i++){
	// 	cin>>arr1[i];
	// 	if(i == 0){
	// 		summation[i] = arr1[i];
	// 	} else {
	// 		summation[i] = arr1[i] + summation[i-1];
	// 	}
	// }

	// // for(int i = 0; i<size; i++) {
	// // 	cout << "summation " << summation[i] << endl;
	// // }
	// while(range--){ // 3 2 1
	// 	long long start,end;
	// 	cin>>start>>end;
	// 	start--;
	// 	end--;          
	// 	long long sum = summation[end] - summation[start] + arr1[start];
	// 	cout<<sum<<endl;
	// }

	// =========================================================================

	long long n1,t;
	cin>>n1>>t; // 3
	long long arr[1]; // 6 4 2 7 2 7
	long long summation[n1], sum = 0; // 6 10 12 
	for(int i=1;i<= n1;i++){
		cin>>arr[i];
		sum += arr[i];
		summation[i] = sum;
	}

	while(t--){ // 3 2 1
		sum = 0;
		long long start,end;
		cin>>start>>end;
		sum = summation[end] - summation[start] + arr[start];
		cout<<sum<<endl;
	}

}