#include <bits/stdc++.h>
using namespace std;


int main() {
	// X. Two intervals

	long long a, b, c, d ;
	int count = 0;
	cin >> a >> b >> c >> d ;
	vector< int > arr;
	// 1 15
	// 5  17   // 5 is between 1 and 15 //
	           // 17 is between 1 and 15

	// 1 15    // 1 is between 5 and 17 no
	           // 15 is between 5 and 17

	if(c >= a && c <=b) {
		count++;
		if(count < 3) 
			arr.push_back(c);
	} 
	if(d >= a && d <=b) {
		count++;
		if(count < 3) 
			arr.push_back(d);
	}
	if(a >= c && a <= d) {
		count++;
		if(count < 3) 	
			arr.push_back(a);
	}
	if(b >= c && a <= d) {
		count++;
		if(count < 3) 
			arr.push_back(b);
	}

	if(count == 0) {
		cout << -1;
	} else{
		arr[0] < arr[1] ? cout << arr[0] << " " << arr[1]  :  cout << arr[1] << " " << arr[0]; 
	}


	return 0;
}