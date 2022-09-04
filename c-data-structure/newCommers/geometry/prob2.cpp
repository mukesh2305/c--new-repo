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

// bool prime(int n) {
// 	bool isPrime = true;
// 	if (n == 0 || n == 1) {
// 		isPrime = false;
// 		return isPrime;
// 	}

// 	for (int i = 2; i <= sqrt(n); i++)
// 		if (n % i == 0) {
// 			isPrime = false;
// 			break;
// 		}
// 	return isPrime;
// }

// int main() {
// 	long long n;
// 	bool flag;
// 	cin >> n;

// 	flag = prime(n);
// 	if (flag) cout << "YES" << nl;
// 	else cout << "NO" << nl;
// }


// ====================================

int main() {
	long long num;
	cin >> num;
	bool isPrime = true;

	if (num == 0 || num == 1) {
		isPrime = false;
	}
	for (int i = 2; i <= sqrt(num); i++) { //
		if (num % i == 0) {
			isPrime = false;
			break;
		}
	}
	if (isPrime) {
		cout << "YES" << endl;
	} else {
		cout << "NO" << endl;
	}
}