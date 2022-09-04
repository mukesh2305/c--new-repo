#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n1, n2;
	cin >> n1 >> n2;

	int arr[n1][n2];

	for (int i = 0; i < n1; i++)
	{
		for (int j = n2 - 1; j >= 0; j--)
		{
			cin >> arr[i][j];
		}
	}

	for (int i = 0; i < n1; i++)
	{
		for (int j = 0; j < n2; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
}