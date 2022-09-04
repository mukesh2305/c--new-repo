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

string stor = "";
string toBin(ll n) {
	if (n > 0) {
		stor = stor + to_string(n % 2);
		toBin(n / 2);
	}
	return stor;
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		ll n;
		cin >> n;
		string s = toBin(n);
		reverse(s.begin(), s.end());
		cout << s;
		stor = "";
		cout << endl ;
	}
}