#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define lb long double
#define ull unsigned long long;
#define sz(x) x.size()
#define all(x) x.begin(), x.end()
#define format(n) fixed << setprecision(n)
#define pi 3.141592653
#define nl '\n'
#define Yes cout << "Yes\n"
#define YES cout << "YES\n"
#define No cout << "No\n"
#define NO cout << "NO\n"

int main() {
	string s1;

	getline(cin , s1);
	int count = 0;
	for (int i = 0; i < sz(s1); i++)
		if (s1[i] == ' ' || s1[i] == '.' || s1[i] == ',' || s1[i] == '?' || s1[i] == '!')
			if ((s1[i + 1] >= 65 && s1[i + 1] <= 90 ) || s1[i + 1] >= 97 && s1[i + 1] <= 122 )
				count++;



	if (s1 != "")
		cout << count + 1;
	else 
		cout << count;
}