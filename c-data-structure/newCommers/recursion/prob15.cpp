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
#define rep(i, a, b) for (int i = a; i<b; i++)
#define test(t) int t ; cin >> t ; while(t--)

// -1 1 0
// 1 0 1
// 0 1 1
// 1 1 2 
// 2 1 3
// fibo(5) = fibo(5 - 1) + fibo( 5- 2);

// ll fibo(ll n){
// 	// if(n == 0) return 0;
// 	// if(n == 1 ) return 1;
// 	if(n <= 1) return n;
// 	return fibo(n -1 ) + fibo(n - 2);
// }

// int main(){
// 	ll n;
// 	cin >> n;
// 	cout << fibo(n-1);
// }

// =================================
int main(){
	int n;
	cin >> n;
	int a = 1, b = 1, c = 0;
	if(n == 1) {
		cout << a;
		return 0;
	}

	if(n == 2){
		cout << b;
		return 0;
	}

	for(int i = 3; i<n; i++){
		c = a+ b;
		a = b;
		b = c;
	}
	cout << c;

}