#include <bits/stdc++.h>
using namespace std;

int main()
{
	int  counter;
	cin >> counter;

	// 2 = 1 * 2 = 2 
	//  5 = 5 * 4 * 3 * 2 * 1


	while(counter){
		long long flag = 1;
		int n;
		cin >> n;
	for( int i = n ; i>= 1; i-- ) {
		flag = flag * i  ; 
	}
	cout << flag << endl;
	counter--;
	}
}