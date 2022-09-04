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
// void rightShift(int *arr, int n) {
// 	int temp = arr[n- 1];
// 	for(int i = n - 1; i> 0;i--){
// 		arr[i] = arr[i - 1];
// 	}
// 	arr[0] = temp;
// }
// int main() {
// 	int n , t;
// 	cin >> n >> t;
// 	int arr[n];
// 	rep(i, 0, n) cin >> arr[i];
// 	while (t--) {
// 		rightShift(arr, n);
// 	}

// 	rep(i, 0, n) cout << arr[i] << " ";
// }


//=====================================================
int main() {

	int n, x;
	cin >> n >> x;
	int arr[n];
	x = x % n;
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	int newarr[n];
	for (int i = 0; i < n; i++)
	{
		newarr[(i + x) % n] = arr[i];
	}
	for (int i = 0; i < n; i++)
		cout << newarr[i] << " ";
}