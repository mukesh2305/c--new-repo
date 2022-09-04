#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;

	for(int i = 1; i<=n;i++) {
		int a, b;
		cin >> a >> b;
		int sum = 0;
		for(int j = (a<b?a:b) + 1 ; j<=(a>b?a:b) -1; j++) {
			if(j % 2 != 0) {
				sum = sum + j;
			} 
		}
		cout << sum << endl;
	}
}