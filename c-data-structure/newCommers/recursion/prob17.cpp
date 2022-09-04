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
// 	int n;
// 	cin >> n;
// 	int count = 0;

// 		int three = 0;
// 		while (n != 1) {
// 			// cout << n << " ";
// 			count++;
// 			if (n % 2  == 0) {
// 				n = n / 2;
// 				// count++;
// 			} else {
// 				n = 3 * n + 1;
// 				// count++;
// 			}
// 		}
// 		// cout << 1 << endl;
// 		cout << count+1 ;
// }

int hii(int n, int count) {
	if (n == 1) return count + 1;
	else if (n != 1) {
		count++;
		if (n & 1) {
			n = 3 * n + 1;
		} else n /= 2;
		return hii(n, count);
	}
}
int main() {
	int n;
	cin >> n;

	cout << hii(n, 0) ;
}