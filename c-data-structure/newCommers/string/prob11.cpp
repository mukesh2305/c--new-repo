#include <bits/stdc++.h>
using namespace std;
#define ll long long;
#define lb long double;
# define ull unsigned long long;
#define sz(x) x.size()
#define all(x) x.begin(), x.end();
#define format(n) fixed << setprecision(n);
# define pi 3.141592653 
# define nl '\n';
# define Yes cout << "Yes\n";
# define YES cout << "YES\n";
# define No cout << "No\n";
# define NO cout << "NO\n";



int main()
{
	// int t;
	// cin >> t;

	// while (t--) {
	// 	string s1, s2;
	// 	cin >> s1 >> s2;
	// 	int sizes1 = s1.size() - 1;
	// 	int sizes2 = s2.size() - 1;

	// 	int high = sizes1 > sizes2 ? sizes1 : sizes2;
	// 	int low = sizes1 < sizes2 ? sizes1 : sizes2;

	// 	for (int i = 0; i <= high; i++) {
	// 		if (sizes1 < sizes2) {
	// 			if (i <= low) {
	// 				cout << s1[i];
	// 			}
	// 			cout << s2[i];
	// 		} else if (sizes1 == sizes2) {
	// 			cout << s1[i] << s2[i];
	// 		} else {
	// 			cout << s2[i];
	// 			if (i <= low) {
	// 				cout << s1[i];
	// 			}

	// 		}
	// 	}
	// 	cout << endl;
	// }

	// ============================================
	// 2 way

	int t;
	string s, x;
	cin >> t;
	while(t--) {
		cin >> s >> x;

		for (int i = 0; i < max(sz(s),sz(x)) ; i++)
		{
			if(i < sz(s)) cout << s[i];
			if(i < sz(x)) cout << x[i];
		}
		cout << nl;
	}

}