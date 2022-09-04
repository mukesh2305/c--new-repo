#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s1;
	cin >> s1;

	for (int i = 0; i < s1.size(); ++i)
	{
		if (s1[i] >= 'A' && s1[i] <= 'Z')
			s1[i] += 32;
		else if (s1[i] >= 'a' && s1[i] <= 'z')
			s1[i] -= 32;
		else s1[i] = ' ';
	}
	cout << s1;
}