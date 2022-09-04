#include <bits/stdc++.h>
using namespace std;

int main()
{
	while(true) {
		int a, b;
		cin >> a >> b;
		if(a <= 0 || b <= 0) break;
		int sum = 0;
		for(int i = (a<b? a : b); i<=(a>b? a : b); i++) {
			sum = sum + i;
			cout << i << " ";
		}
		cout << "sum" << " =" << sum;
		cout << endl;
	}
}

// 8291711766