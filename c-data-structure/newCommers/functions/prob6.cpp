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
#define rep(i, a, b) for (int i = a; i<b; i++)
#define test(t) int t ; cin >> t ; while(t--)

ll equation(int a, int b) {
	ll result = 0;
	for (int i = 2; i <= b; i+=2)
			result = result + pow(a, i);
	return result;
}
int main() {
	int a, b;
	cin >> a >> b;
	cout << equation(a, b);
}