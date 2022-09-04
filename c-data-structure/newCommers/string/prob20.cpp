#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define lb long double
#define ull unsigned long long;
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
	string s1;
	cin >> s1;

	int usr_index = s1.find("username");
	int pwd_index = s1.find("pwd");
	int pro_index = s1.find("profile");
	int role_index = s1.find("role");
	int key_index = s1.find("key");
	int arr[5] = {usr_index, pwd_index, pro_index, role_index, key_index};
	int i = 0;
	while (i < 5) {
		for (int j = arr[i] ; j < sz(s1); j++) {
			if (s1[j] != '&') {
				if (s1[j] == '=') cout << ": ";
				else cout << s1[j] ;
			} else break;
		}
		cout << nl;
		i++;
	}

}