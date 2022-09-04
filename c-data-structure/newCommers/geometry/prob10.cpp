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
	// ll n;
	// cin >> n;
	// ll i = 2;
	// while (n > 1) {
	// 	if (n % i == 0) {
	// 		// cout << "this";
	// 		cout << i << " ";
	// 		n /= i;
	// 	} else i++;
	// }


	// ============================
	ll n;
	cin >> n;
	int cnt = 0;
	int sq = sqrt(n);
	for (int i = 2; i <= sq; ++i)
	{
		cnt = 0;
		if (n % i == 0)
		{
			while (n % i == 0)
			{
				n /= i;
				cnt++;
			}
			cout << "(" << i << '^' << cnt << ")";
			if (n != 1)cout << '*';
		}

	}
	if (n != 1)
		cout << "(" << n << '^' << 1 << ")";

}