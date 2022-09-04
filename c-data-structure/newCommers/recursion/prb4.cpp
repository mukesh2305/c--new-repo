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
// int temp;
// ll digits(ll value) {

// 	if (value > 0) {
// 		temp = temp * 10 + value % 10 ;
// 		digits(value / 10);
// 	}
// 	return temp;
// 	// cout << value << " ";
// }
// int main() {
// 	int t;
// 	cin >> t;
// 	ll value;
// 	while (t--) {
// 		cin >> value;
// 		ll num = digits(value) ;
// 		temp = 0;
// 		while (num) {
// 			cout << num % 10 << " ";
// 			num /= 10;
// 		}
// 		cout << nl;
// 	}

// }


//  ========================================

int in = 0; // 2
void print(string num) {

	if (in == num.size()) return;

	cout << num[in++] << " "; // 1 2 3 4 5
	print(num); //
}
int main()
{
	int testCase;
	cin >> testCase;
	while (testCase--) { // 3 2 1
		string num; // 121
		cin >> num;
		print(num);
		cout << endl;
		in = 0;
	}
}

