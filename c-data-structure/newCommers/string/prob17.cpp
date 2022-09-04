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
	// string s1;
	// int flag = 0;
	// while(cin >> s1) {
	// 	reverse(s1.begin(), s1.end());
	// 	if(flag) cout << " ";
	// 	flag = 1;
	// 	cout << s1;
	// }

// ===================================================
	string s, t = "";
    getline(cin, s);
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != ' ')
        {
            t = s[i] + t;
        } 
        else
        {
            cout << t << " ";
            t = "";
        }
    } 
    cout << t;
}