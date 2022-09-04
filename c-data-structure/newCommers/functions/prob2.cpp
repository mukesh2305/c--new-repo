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

void print(int n) {
	for(int i = 1; i<= n; i++) {
		if(i == n) {
			cout << i ;
			break;
		}
		cout << i << " "; 
	}
}
int main() {
	int n;
	cin >> n;
	print(n);
}
