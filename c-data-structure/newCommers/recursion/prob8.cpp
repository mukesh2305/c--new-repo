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

// int main() {
// 	int n;
// 	cin >> n;
// 	// pyramid(1, n);
// 	for (int i = 1; i <= n; ++i)
// 	{
// 		for (int j = 1; j <= 2*n  - i ; j++) {
// 			if (j >= i) cout << "*";
// 			else cout << " ";
// 		}
// 		cout << nl;

// 	}
// }

void pyramid(int row , int n){
	if(row > n) return;
	for(int j = 1; j<= 2*n - row; j++){
		if(j >= row) cout << "*";
		else cout << " ";
	}
	cout << nl;
	pyramid(row + 1, n);
}
int main() {
	int n;
	cin >> n;
	pyramid(1, n);
}