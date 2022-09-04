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

// 5 = 5 * fact(4);

// ncr = n!/r!(n - r)!

// ll fact(ll n){
// 	if(n == 1 ) return 1;
// 	return n * fact(n - 1);
// }
// int main() {
// 	ll n, r;
// 	cin >> n >> r;
// 	if( n == r || r == 0) {
// 		cout << 1;
// 		return 0;
// 	}
// 	if(n < r) swap(n , r);
// 	ll comb = fact(n)/(fact(r)*(fact(n - r)));
// 	cout << comb ;
// }

// NCr = NCr-1 * (N-r+1) / r
// n!/(r-1)!(n - (r-1))! 

// ====================
// ll fact(ll n){
// 	if(n == 1 ) return 1;
// 	return n * fact(n - 1);
// }
// int main() {
// 	ll n, r;
// 	cin >> n >> r;
// 	if(n == r || r == 0) {
// 		cout << 1;
// 		return 0;
// 	}
// 	ll comb =((fact(n)/ (fact(r - 1) * fact(n - (r - 1)))) * (n - r + 1)) / r ; 
// 	cout << comb;
// }

// ==============================================
ll nCr(ll n , ll r){
    if(n == r || r == 0){return 1;}
    if(r > n){return 0;}
    return nCr(n - 1, r) + nCr(n - 1, r - 1);
}
int main()
{
    IOS;
    setp(6);
    ll n , r;
    cin >> n >> r;
    cout << nCr(n, r);
    return 0;
}