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

int main() {
	string s;
	string sub = "egypt";
	cin >> s;
	transform(s.begin(), s.end(), s.begin(), ::tolower);
	int arr[sz(sub)] = {0};
	for (int i = 0; i < sz(s); i++) {
		if (s[i] == 'e') arr[0]++;
		else if (s[i] == 'g') arr[1]++;
		else if (s[i] == 'y') arr[2]++;
		else if (s[i] == 'p') arr[3]++;
		else if (s[i] == 't') arr[4]++;
	}
	int length = sizeof(arr) / sizeof(arr[0]);
	// int min = arr[0];
	// for (int i = 1; i < length; i++) {
	// 	if(arr[1] < min) min = arr[1];
	// }
	// cout << min;
	cout << *min_element(arr, arr + length);



	// ====================================================
	// string s;
	//   //Egypt
	//   cin >> s;
	//   int a[30] = { 0 };
	//   for (int i = 0; i < sz(s); i++)
	//   {
	//       char c = tolower(s[i]);
	//       a[c - 'a']++;
	//   }

	//   int e = a['e' - 'a'], g = a['g' - 'a'], y = a['y' - 'a'], p = a['p' - 'a'], t = a['t' - 'a'];
	//   cout << min({ e,g,y,p,t });

	// ==========================================================
	// string s;
	// cin >> s;
	// for (int i = 0; i < s.size(); i++)
	// {
	// 	s[i] = tolower(s[i]);
	// }
	// int counte = count(s.begin(), s.end(), 'e');
	// int countg = count(s.begin(), s.end(), 'g');
	// int county = count(s.begin(), s.end(), 'y');
	// int countp = count(s.begin(), s.end(), 'p');
	// int countt = count(s.begin(), s.end(), 't');
	// int ans = min(counte, min(countg, min(county, min(countp, countt))));
	// cout << ans;

}