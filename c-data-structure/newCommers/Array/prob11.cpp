#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, sum = 0;
	cin >> n;
	// int arr[n];
	string v1;
	cin >> v1;
// 	char a = '4';
// int ia = a - '0';

// int ia = ((int)a) - ((int)'0');
	for(int i = 0; i<v1.size(); i++) {
		sum = sum + (v1[i] - '0');
	}
	cout << sum ;

}