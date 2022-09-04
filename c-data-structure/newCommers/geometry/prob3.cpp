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

// sum of first 5(n) odd number is = n * n
// sum of first 5(n) even number is = n * (n + 1);

// int main() {
// 	ll l, r;
// 	cin >> l >> r;
// 	if(l > r) swap(l , r);

// 	ll even = 0, odd = 0, all = 0;
// 	for (int i = l ; i <= r; i++) {
// 		if (i % 2 == 0)
// 			even += i;
// 		else
// 			odd += i;
// 		all += i;
// 	}
// 	cout << all << nl << even << nl << odd;

// }

// =====================================
ll sumNatural(ll n) {
	ll sum = (n * (n + 1)) / 2;
	return sum;
}
void sumin_range_all(ll l, ll r) {
	cout << sumNatural(r) - sumNatural(l - 1) << nl;
}


ll sumEven(ll n){
	ll sum = n * (n + 1);
	return sum;
}
void sumin_range_even(ll l, ll r){
	cout << sumEven(r/2) - sumEven((l-1)/2) << nl;
}

ll sumOdd(ll n){
	ll terms = (n + 1)/2;
	ll sum = terms * terms;
	return sum;
}

void sumin_range_odd(ll l, ll r){
	cout << sumOdd(r) - sumOdd(l - 1) << nl;
}


int main() {
	ll l, r;
	cin >>  l >> r;

	if (l > r) swap(l , r);

	sumin_range_all(l, r);
	sumin_range_even(l, r);
	sumin_range_odd(l, r);

	// all 
	//  all - even = odd
	// all - odd = even
}