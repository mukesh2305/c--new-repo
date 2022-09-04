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
int arr1[100][100], arr2[100][100];

void sm_mt(int r, int c, int rs , int cs ) {
	if (rs < r ) {
		if (cs < c) {
			cout << arr1[rs][cs] + arr2[rs][cs] << " ";
			cs++;
		} else {
			cs = 0;
			rs++;
			cout << nl;
		}
	} else return;
	sm_mt(r, c, rs, cs);

}
int main() {
 	int r , c;
	cin >> r >> c;
	rep(i, 0, r) {
		rep(j, 0, c) {
			cin >> arr1[i][j];
		}
	}

	rep(i, 0, r) {
		rep(j, 0, c) {
			cin >> arr2[i][j];
		}
	}
	sm_mt( r, c, 0 , 0);
}