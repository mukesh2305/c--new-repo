#include <bits/stdc++.h>
using namespace std;
#define ll long long;
#define lb long double;
# define ull unsigned long long;
#define sz(x) x.size()
#define all(x) x.begin(), x.end()
#define format(n) fixed << setprecision(n)
# define pi 3.141592653
# define nl '\n'
# define Yes cout << "Yes\n"
# define YES cout << "YES\n"
# define No cout << "No\n"
# define NO cout << "NO\n"
// string palindrome(int wonder, int sum) {
// 	if(wonder == sum) return "YES\n";
// 	else return "NO\n";
// }
// string wonder_number(int n) {
// 	int sum = 0;
// // 	this is reverse of binary number
// 	while(n) {
// 		sum = sum * 10 + n % 2;
// 		n/= 2;
// 	}

// 	int wonder = 0;
// 	int temp = sum;
// // 	actual binary number
// 	while(temp) {
// 	    wonder = wonder * 10 + temp % 10;
// 	    temp /= 10;
// 	}
// 	return palindrome(wonder, sum);
// }


// int main() {
// 	int n;
// 	cin >> n;

// 	if (n % 2 != 0) cout << wonder_number(n);
// 	else cout << "NO\n";

// }
// ========================================================
int  main() {
	// string s;

	int n;
	cin >> n;
	string s1;
	if (n & 1) {

		while (n) {
			s1 += (n % 2) + '0';
			n /= 2;
		}

		// cout << s1;
		string rev = s1;
		reverse(s1.begin(), s1.end());
		if (rev == s1) cout << "YES\n";
		else cout << "NO\n";
	} else cout << "NO";
}