#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, k = 0;
	cin >> n;
	// for(int i = 1; i<=2 *n; i++) {
	// 	for(int j = 1; j<= spaces; j++) 
	// 		cout << " ";
	// 	for(int k = 1; k < i*2 ; k++ )
	// 		cout << "*";
	// 	cout << endl;
	// 	spaces--;
	// }

	for (int i = 1; i <= 2 *n; i++)
	{
		k = i <= n ? i : ((2*n+1) - i) ; 
		for (int j = 1; j <= n*2 - 1; j++)
		{
			if(j >= (n+1) - k && j <= (n - 1) + k ) cout << "*";
			if(j <= n - k) {
				cout << " ";
			}
		}		
		cout << endl;
	}
}