#include <bits/stdc++.h>
using namespace std;

int main()
{
	// int n1, n2, count++;
	// cin >> n1 >> n2;

	// int arr[n1];

	// for (int i = 0; i < n1; i++)
	// {
	// 	cin >> arr[i];
	// }

	// for (int i = 1; i <= n2; i++)
	// {
	// 	count = 0;
	// 	for (int j = 0; j < n1; j++)
	// 	{
	// 		if (i == arr[j])
	// 		{
	// 			count++;
	// 		}
	// 	}

	// 	cout << count << endl;
	// }



	int n, n1;
	int arr[n1];
	int freq[n1];
	cin >> n >> n1;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	for (int i = 0; i < n; i++)
	{
		freq[arr[i]]++;
	}

	for (int i = 0; i < n; i++)
	{
		if (freq[i] > 0)
			cout << freq[i] << " ";
	}



}