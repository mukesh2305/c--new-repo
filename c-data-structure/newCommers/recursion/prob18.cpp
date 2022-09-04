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

// int main() {
// 	ll n;
// 	cin >> n;
// 	ll arr[n];
// 	string s = "";
// 	rep(i, 0, n) {
// 		cin >> arr[i];
// 		s = s + to_string(arr[i]);
// 	}
// 	string temp = s;
// 	reverse(s.begin(), s.end());
// 	if(s == temp) YES;
// 	else NO;
// }


// ======================================================
// int main() {
// 	ll n;
// 	cin >> n;
// 	ll arr[n];
// 	string s = "";
// 	rep(i, 0, n) {
// 		cin >> arr[i];
// 		s = s + to_string(arr[i]);
// 	}

// 	if (s == string(s.rbegin(), s.rend())) YES;
// 	else NO;
// }

// =========================================================
ll arr[1000];
ll n;
bool palindromes(int index){
	// cout << "n === " << n << " index ===  " << index << nl;
	if(index == n) return 1;
	return arr[index] == arr[n - index - 1] && palindromes(index + 1);
}
int main() {
	cin >> n;
	rep(i, 0, n) {
		cin >> arr[i];
	}
	if(palindromes(0)) YES;
	else NO;
}