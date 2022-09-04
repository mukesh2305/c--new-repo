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


int main ()
{
	// int size, query;
	// cin >> size >> query;
	// string value;
	// cin >> value;
	// string qu;
	// int scope1, scope2;
	// while (query--) {
	// 	cin >> qu;
	// 	if (qu == "pop_back") {
	// 		value.pop_back();
	// 	} else if (qu == "front") {
	// 		cout << value.front() << nl;
	// 	} else if (qu == "back") {
	// 		cout << value.back() << nl;
	// 	} else if (qu == "sort") {

	// 		cin >> scope1 >> scope2; // 6 3
	// 		sort(value.begin() + min(scope1, scope2) - 1 // 2
	// 		     , value.begin() + max(scope1, scope2)); // 6

	// 	} else if (qu == "reverse") {

	// 		cin >> scope1 >> scope2; // 6 3
	// 		reverse(value.begin() + min(scope1, scope2) - 1
	// 		        , value.begin() + max(scope1, scope2));

	// 	} else if (qu == "print") {
	// 		int pos ;
	// 		cin >> pos;
	// 		cout << value[pos - 1] << nl;
	// 	} else if (qu == "substr") {
	// 		cin >> scope1 >> scope2; // 4 1
	// 		for (int i = min(scope1, scope2) - 1; i <= max(scope1, scope2) - 1; i++) {
	// 			cout << value[i];
	// 		}
	// 		cout << nl;
	// 	} else {
	// 		char c;
	// 		cin >> c;
	// 		value.push_back(c);

	// 	}
	// }

	// ==============================================
	// 2 way




	int n, t;
	cin >> n >> t;
	string s;
	cin >> s;
	string q;
	int l, r;
	while (t--) {
		cin >> q;
		if (q == "pop_back") {
			s.pop_back();
		}
		else if (q == "front") {
			cout << s.front() << nl;
		}
		else if (q == "back") {
			cout << s.back() << nl;
		}
		else if (q == "sort") {
			cin >> l >> r; // 6 3
			if (l > r)
				swap(l, r);
			l--;
			sort(s.begin() + l , s.begin() + r);

		}
		else if (q == "reverse") {

			cin >> l >> r;
			if (l > r)
				swap(l, r);
			l--;
			reverse(s.begin() + l, s.begin() + r);


		}
		else if (q == "print") {
			int pos ;
			cin >> pos;
			cout << s[pos - 1] << nl;
		}
		else if (q == "substr") {
			cin >> l >> r;
			// if (l > r) swap(l, r);
			// l--;
			// for (int i = l; i < r; i++)
			// 	cout << s[i];

			// 2nd way 
			cout << s.substr(min(l, r) -1 , max(l, r) - 1) << endl;
		} else {
			char c;
			cin >> c;
			s.push_back(c);

		}
	}
}
