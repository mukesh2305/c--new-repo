#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s1;
	cin >> s1;

	int l = 0;
	int size = s1.size() - 1;

	while(size > l) {
		// starting l = 0 and afer it increment post increment 
		if(s1[l++] != s1[size--]) {
			cout << "NO";
			return 0;
		}
	}
	cout << "YES";
	return 0;

}