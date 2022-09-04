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

// int main() {
// 	ll sumation;
// 	cin >> sumation;
// 	ll i = 1;
// 	ll newSum = 0;
// 	ll count = 0;
// 	while(i){
// 		newSum = (i * (i +1))/2;
// 		if(newSum <= sumation) count++;
// 		else break;
// 		i++;
// 	}

// 	cout << count;
// }

//==========================================
// int main() {
// 	long long num;
// 	cin >> num;
// 	for (long long i = 1;; i++) {
// 		if (i > num) {
// 			cout << i - 1;
// 			return 0;
// 		} else {
// 			num -= i;
// 		}
// 	}
// }

// =====================
int main() {

	ll a, b = 0, q = 0;
	cin >> a;
	while (b < a)
	{
		q++;
		b += q;
	}
	// cout << q << nl;
	if (b > a)q--;
	cout << q << endl;
}