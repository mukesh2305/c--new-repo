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

	ll a;
	cin >> a;
	ll sum = 0;

	for(int i = 1; i<= sqrt(a); i++){
		if(a % i == 0){
			sum = sum + i;
			cout << " if " << i << " " << sqrt(a) << nl;

			if(i != sqrt(a)){
				cout << i << " " << sqrt(a) << nl;
				sum = sum + a/i;
			}
		}
	}
	cout << sum ;
}