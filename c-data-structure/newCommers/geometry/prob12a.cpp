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

int main() {
	// ll n;
	// cin >> n;

	// for (ll i = 1; i <= n; i++) {
	// 	for (ll j = 1; j <= i; j++) {
	// 		if (j == 1 || j == i)
	// 			 cout << 1 << " ";
	// 		else
	// 			cout << i - 1 << " ";

	// 	}
	// 	cout << nl;
	// }



	// ==============================================
	// long long line;//4
	// cin>>line;
	// int value;
	// for(int i=0;i<line;i++){ // 0 1 2
	// 	value = 1;
	// 	for(int z =0;z<=i;z++){ //   0 1 2  z<=2
	// 		cout<<value<<" ";
	// 		value = value * (i - z) / (z + 1); // 1 * (2 - 0) / (0 + 1)
	// 	}
	// 	cout<<endl;
	// }


	// ===========================================
	ll n;
	cin >> n;
	int value;
	int arr[n][n];
	for (int i = 0; i < n; i++){
		for (int j = 0; j <= i; j++ ) {
			if (j == 0 || j == i)
				arr[i][j] = 1;
			else arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
			cout << arr[i][j] << " ";
		}
		cout << nl;
	}

}