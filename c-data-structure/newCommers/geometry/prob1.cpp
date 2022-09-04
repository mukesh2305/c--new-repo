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

// int main() {
// 	ll n;
// 	cin >> n;
// 	ll i;
// 	for ( i = 2; i <= n; i *= 2) {
// 		if (i == n) {
// 			cout << "YES";
// 			break;
// 		}
// 	}

// 	if (i > n) cout << "NO";
// }

// ================================
// log2(8)/log2(2) = 3 // log2(10)/log2(2) = 3.1231
int main() {
	// ll n;
	// cin >> n;
	// double res = log2(n)/log2(2);

	// if(res - (ll)res != 0) cout << "NO" << nl;
	// else cout << "YES" << nl;



	// ===========================================================
// 	ll n;
// 	cin >> n;

// 	while (n % 2 == 0)
// 		n /= 2;

// 	if (n == 1) cout << "YES";

// 	else cout << "NO";


	//  ==========================================================

	long long n;
	cin >> n;
	if (n & (n - 1))  // 0
		cout << "NO" << endl;
	else
		cout << "YES" << endl;
	return 0;
}