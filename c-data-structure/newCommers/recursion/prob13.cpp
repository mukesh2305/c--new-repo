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
ll suffix_sum(ll n, int *arr, ll end) {

	if (end == n) return 0;
	// n--;
	return arr[n] + suffix_sum(--n, arr, end );
}
int main() {
	ll n, m;
	cin >> n >> m;
	int arr[n];
	rep(i, 0, n) cin >> arr[i];
	ll end = n - 1 - m ;
	cout << suffix_sum(n - 1 , arr, end);
}