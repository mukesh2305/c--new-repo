#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define lb long double
#define ull unsigned long long
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
	// string  n;
	// ll div;
	// cin >> n >> div;

	// ll sum = 0;
	// for (int i = 0; i < n.size(); i++) {
	// 	sum += n[i] - '0';
	// }
	// (sum % div == 0) ? cout <<  "YES" : cout <<  "NO";

	// ===================================
	string  n;
	ll div;
	cin >> n >> div;

	ll sum = 0;
	ll res = 0;
	for (int i = 0; i < n.size(); i++) {
		res = res * 10 + n[i] - '0';
		res %= div;
	}
	(res == 0) ? cout <<  "YES" : cout <<  "NO";


}