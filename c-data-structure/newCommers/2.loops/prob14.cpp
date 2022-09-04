#include <bits/stdc++.h>
using namespace std;

int main()
{
	char sym;
	cin >> sym;
	int n;
	cin >> n ;
	for (int i = 1; i <= n; i++)
	{
		int x;
		cin >> x;
		for(int i = 1; i<=x; i++) {
			cout << sym ;
		}
		cout << endl;
	}
	return 0;
}