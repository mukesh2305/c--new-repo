#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	// string s ;
	// cin >> s;
	// ll  i = stoi(s);


	// ll sum = 0;
	// while (i) {
	// 	// sum += s[i] - '0' second way to convert string to number 
	// 	sum = sum + i % 10;
	// 	i /= 10;
	// }
	// cout << sum  << endl;

	// ----------------------
	string s ;
	cin >> s;
	ll sum = 0;

	for (int i = 0; i < s.size(); ++i)
	{
		sum += s[i] - '0';
	}
	cout << sum ;

}