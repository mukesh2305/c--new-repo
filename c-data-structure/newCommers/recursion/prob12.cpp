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


// ll summation(ll *arr, ll n){
// 	if(n == 0) return 0;
// 	n--;
// 	return arr[n] + summation(arr, n); 
// }
// int main() {
// 	ll n;
// 	cin >> n;
// 	ll arr[n];
// 	rep(i, 0, n) cin >> arr[i];
// 	cout << summation(arr, n);
// }

// ===================================================
ll summation(ll *arr, ll n, int sr){
	if(sr == n) return 0;
	return arr[sr] + summation(arr, n, sr+1) ;
}
int main() {
	ll n;
	cin >> n;
	ll arr[n];
	rep(i, 0, n) cin >> arr[i];
	cout << summation(arr, n, 0);
}