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
// 	ll a, b , div;
// 	cin >> a >> b >> div ;
// 	ll sum = 0;
// 	for (ll i = 1; i <= b / div; i++)
// 		if (a * i <= b)
// 			sum = sum + a * i;

// 	cout << sum ;
// }

ll sum(ll n){
	return n*(n + 1)/2;
}
int main() {
	ll a, b , c;
	cin >> a >> b >> c ;
	ll ma = max(a, b);
	ll mi = min(a, b);

	cout << (sum(ma/c)  - sum((mi-1)/c)) * c;
}
