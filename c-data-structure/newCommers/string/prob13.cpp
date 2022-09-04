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

// bool subsquence(string s1, string sub) {
// 	if(s1 == sub) return true;
// 	int index_s1 = 0;
// 	int index_sub = 0;
// 	while(index_sub < sz(sub) && index_s1 < sz(s1)) {
// 		if(sub[index_sub] == s1[index_s1])
// 			index_sub++; // 5  //0 1 2 3
// 		index_s1++; // 10
// 	}
// 	return index_sub == sz(sub);
// }

// int main ()
// {
// 	string s1, sub = "hello";
// 	cin >> s1;
// 	if(subsquence(s1, sub))
// 		YES
// 	else
// 		NO
// }

// =============================================
// 2nd way

int main() {
	string s, sub = "hello";
	cin >> s;
	bool c = false;
	int count = 0;
	if(s == sub) YES;
	for(int i = 0; i<sz(s); i++) {
		if(s[i] == sub[count]) count++;
		if(count == sz(sub)) {
			c = true;
			break;
		}
	}
	if(c) YES;
	else NO;

}