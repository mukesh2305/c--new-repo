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
int cn = 0;
int vowels(int index, string s) {
	if (index == s.size()) return cn;
	if (s[index] == 'a' || s[index] == 'e' || s[index] == 'i' || s[index] == 'o' || s[index] == 'u')
		cn += 1 ;
	return vowels(index + 1, s);
}

int main() {
	string s ;
	getline(cin, s);
	transform(s.begin(), s.end(), s.begin(), ::tolower);
	cout << vowels(0, s);
}

