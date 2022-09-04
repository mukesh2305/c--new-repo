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

int main() {
	int n;
	cin >> n;
	int arr[n] , sum = 0;
	for(int i = 0; i<n; i++) {
		cin >> arr[i];
		sum += arr[i];
	}
	for(int i = 0; i<n; i++) {
		sum += arr[i];
	}
	cout << sum/2

}