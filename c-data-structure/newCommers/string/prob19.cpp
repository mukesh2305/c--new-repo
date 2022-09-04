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
	int L = 0 , Counter = 0;
	string S;
 
	cin >> S;
 
	for (int i = 0; i < S.size(); i++)
	{
		if (S[i] == 'L')
			L++;
		else
			L--;
 
		if (L == 0)
			Counter++;
	}
 
	cout << Counter << nl;
 
 
	for (int i = 0; i < S.size(); i++)
	{
		if (S[i] == 'L')
		{
			L++;
			cout << S[i];
		}
		else
		{
			L--;
			cout << S[i];
		}
 
		if (L == 0)
		{
			cout << nl;
		}
	}
		return 0;

}