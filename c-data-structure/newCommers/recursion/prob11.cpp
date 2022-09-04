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

// // int max_number(ll n){

// // }
// int main() {
// 	ll n;
// 	cin >> n;
// 	ll arr[n];
// 	ll mx = 0;
// 	rep(i, 0, n){
// 		cin >> arr[i];
// 		if(arr[i] > mx) mx = arr[i];
// 	}
// 	cout << mx;
// 	// max_number(n);
// }

// ===================================================

// 1 -3 5 4 -6

// ll max_number(ll *arr, ll n,int mx, int srt){

// 	if(srt == n) return mx;
// 	if(arr[srt] > mx) mx = arr[srt];
// 	srt++;
// 	return max_number(arr, n, mx,srt);
// }
// int main() {
// 	ll n;
// 	cin >> n;
// 	ll arr[n];
// 	rep(i, 0, n)
// 		cin >> arr[i];
// 	cout << max_number(arr, n, 0, 0);
// }


// ==============================================================

// int mx = -(1e9 + 2);
// void max_number(int *arr, int st, int n) {
// 	if (st == n) return ;
// 	mx = max(mx, arr[st]);
// 	st++;
// 	max_number(arr, st, n);
// }
// int main() {
// 	int n;
// 	cin >> n;
// 	int arr[n];
// 	rep(i, 0, n) cin >> arr[i];
// 	max_number(arr, 0, n );
// 	cout << mx;
// }

// ===============================================

int main() {
	int n;
	cin >> n;
	int arr[n];
	rep(i, 0, n) cin >> arr[i];
	sort(arr, arr+n);
	cout << arr[n - 1];
}