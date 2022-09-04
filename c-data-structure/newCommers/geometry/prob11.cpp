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

// 5 = 5 * 3 * 4 * 2 * 1;
//  5! = 5 * (5-1) 

// ll fact(ll n){
// 	if(n == 1) return 1;
// 	return n * fact(n - 1);
// }

ll fact (ll n) {
	ll mul = 1;
	for(ll i = 1; i<=n; i++){
		mul = mul * i;
	}
	return mul;
}

int main() {
	ll a, b;
	cin >> a >> b;
	if(a < b) swap(a , b);
	ll fact_b = fact(b);
	ll combination = fact(a)/(fact_b*fact(a -b));
	cout << combination << " " <<  combination * fact_b;
}