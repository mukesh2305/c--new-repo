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
	// int n;
	// cin >> n;
	// string s;
	// cin >> s;
	// int score = 0;
	// // VYWZW  // vyzww
	// for (int i = 0; i < n; i++) {
	// 	if (s[i] == 'V')
	// 		score += 5;

	// 	else if (s[i] == 'W')
	// 		score += 2;

	// 	else if (s[i] == 'Y') {
	// 		int temp = s[i + 1];
	// 		int j;
	// 		for ( j = i + 1; j < n - 1; j++) {
	// 			s[j] = s[j + 1];
	// 		}
	// 		s[j] = temp;
	// 	}

	// 	else if (s[i] == 'Z' && s[i + 1] == 'W') {
	// 		score /= 2;
	// 		i++;
	// 	}
	// 	else if (s[i] == 'Z' && s[i + 1] == 'V') {
	// 		score /= 5;
	// 		i++;
	// 	}
	// 	else if (s[i] == 'X')
	// 		i++;
	// }

	// cout << score;

	// =======================================================================================
	// 2nd ways

	int n; 
    cin >> n; 
    string s; 
    cin >> s; 
    ll ans = 0; 
    for (int i = 0; i < sz(s); i++)
    {
        
        if (s[i] == 'V')
        {
            ans += 5;
        }
        else if (s[i] == 'W')
        {
            ans += 2;
        }
        else if (s[i] == 'X')
        {
            i++;
        }
        else if (s[i] == 'Y' && i < sz(s) - 1)
        {
            s.push_back(s[i + 1]);
            i++;
        }
        else if (s[i]=='Z'&& i < sz(s) - 1)
        {
            if (s[i+1] == 'V')
            {
                ans /= 5;
                i++;
            }
            else if (s[i+1] == 'W')
            {
                ans /= 2;
                i++;
            }
        }
    }
	cout << ans;
	// ====================================================
}