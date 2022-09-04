#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, a, b, totalSum = 0;

	cin >> n >> a >> b;
	
	for(int i = 1; i<=n; i++) {
		int  sum = 0;
		int temp = i;
		while(temp){
			sum = sum + temp%10;
			temp /= 10;
		}
		if(sum >= a && sum <= b) {
			totalSum = totalSum + i;
		}
	}
	cout << totalSum;
}