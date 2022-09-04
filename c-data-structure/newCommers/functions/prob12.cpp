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

// 	int t = 2;
// 	int arr[n][n];
// 	int c[2 * n];
// 	int count = n;
// 	// while(t--) {
// 	for (int i = 0; i < n; i++) {
// 		// count = 0;
// 		for (int j = 0; j < n; j++) {
// 			cin >> arr[i][j];
// 			c[count] = arr[i][j];
// 			count++;
// 		}
// 		count = 0;
// 	}

// 	rep(i , 0, 2 * n) {
// 		if (i == 2 * n - 1)
// 			cout << c[i];
// 		else
// 			cout << c[i] << " ";
// 	}
// }
const int s= 10001;
void print(int arr[s], int size){
	rep(i, 0, size) cout << arr[i] << " ";
}
int main() {
	int size;
	cin >> size;

	int arr1[s];
	int arr2[s];

	rep(i, 0, size) cin >> arr1[i];
	rep(i, 0, size) cin >> arr2[i];

	print(arr2, size);
	print(arr1, size);


}