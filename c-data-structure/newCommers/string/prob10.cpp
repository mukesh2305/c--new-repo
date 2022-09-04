#include <bits/stdc++.h>
using namespace std;
int main()
{
	// string s1;
	// cin >> s1;

	// sort(s1.begin(), s1.end());

	// for (int i = 0; i < s1.size(); i++)
	// {
	// 	char c = s1[i];
	// 	int count = 0;
	// 	// aaabc
	// 	while (s1[i] == c)
	// 	{
	// 		count++;
	// 		i++;
	// 	}
	// 	i--;
	// 	cout << c << " : " << count << endl;
	// }

	// ===========================================================
	// 2 ways to solve this problem
	string s1;
	cin >> s1;
	int count[26] = {0};
	for (int i = 0; i < s1.size(); i++)
	{
		count[s1[i] - 'a']++;
	}
	for (int i = 0; i < 26; i++)
	{
		if (count[i] > 0)
		{
			cout << (char)(i + 'a') << " : " << count[i] << endl;
		}
	}

}
