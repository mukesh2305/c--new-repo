#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, max = 0;
	cin >> n;
	for(int i = 0; i< n; i++) {
		int value;
		cin>> value;

		if(value > max) {
			max = value;
		} 
	}
	cout << max;
}