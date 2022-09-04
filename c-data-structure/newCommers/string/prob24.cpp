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

int main()
{
	// string s;
	// cin >> s;
	// int round = s.size() - 2;
	// string s1, s2;
	// for(int i = 0; i< round; i++){
	// 	s1= s.substr(i + 1) ;
	// 	sort(s1.begin(), s1.end());
	// 	s2 = s.substr(0, i + 1);
	// 	sort(s2.begin(), s2.end());
	// 	s = s2 + s1;
	// }
	// cout << s;


	//===========================================
	string s, x, y,ans; 
    cin >> s ; 
    ans = s;
    for (int i = 1; i < sz(s); i++)
    {
        for (int j = 0; j < i ; j++)
        {
            x += s[j];
        }
        for (int j = i; j < sz(s); j++)
        {
            y += s[j];
        }
        sort(all(x)), sort(all(y));
        string t = x + y;
        if (t < ans)
        {
            ans = t;
        }
        y = "", x = "";
    }
    cout << ans;
}