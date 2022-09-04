#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define lb long double
#define ull unsigned long long
#define ui unsigned int
#define sz(x) x.size()
#define all(x) x.begin(), x.end()
#define format(n) fixed << setprecision(n)
#define pi 3.141592653
#define nl '\n'
#define Yes cout << "Yes\n"
#define YES cout << "YES\n"
#define No cout << "No\n"
#define NO cout << "NO\n"
#define rep(i, a, b) for (int i = a; i<b; i++)
#define test(t) int t ; cin >> t ; while(t--)


int main() {
	ll n;
	cin >> n;
	cout << (int)log2(n);
}

// =========================

// unsigned int Log2n(int n) {
// 	return n > 1 ? 1 + Log2n(n/ 2): 0;
// }
// int main() {
// 	int n;
// 	cin >> n;
// 	cout << Log2n(n);
// 	return 0;
// }

// // ======================
// // int main() {
// // 	int n;
// // 	cin >> n;
// // 	cout << (int)(log(n) / log(2));
// // }