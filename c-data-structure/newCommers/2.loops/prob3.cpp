#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a , even= 0, odd=0,positive = 0, negative = 0  ;
	cin >> a;

	for(int i = 1; i<=a; i++) {
		int num;
		cin >> num ;
		if(num % 2 != 0) odd++;
		 if(num % 2 == 0) even++;
		if (num > 0) positive++;
		 if (num < 0) negative++;
	}

	cout << "Even: " << even << endl;
	cout << "Odd: " << odd << endl; 
	cout << "Positive: " << positive << endl; 
	cout << "Negative: " << negative ; 
	 
}