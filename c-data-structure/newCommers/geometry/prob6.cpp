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
	int r1, c1;
	cin >> r1 >> c1;
	int mat1[r1][c1];





	for (int i = 0; i < r1; i++) {
		for (int j = 0; j < c1; j++) {
			cin >> mat1[i][j];
		}
	}
	int r2, c2;
	cin >> r2 >> c2;
	int mat2[r2][c2];
	int result[r1][c2];

	if (c1 != r2) return 0;
	for (int i = 0; i < r2; i++) {
		for (int j = 0; j < c2; j++) {
			cin >> mat2[i][j];
		}
	}

	for (int i = 0; i < r1; i++) {
		for (int j = 0; j < c2; j++) {
			result[i][j] = 0;
			for (int k = 0; k < r2; k++) {
				result[i][j] = result[i][j] + mat1[i][k] * mat2[k][j];
			}
			cout << result[i][j] << "\t";
		}
		cout  << nl;
	}



}