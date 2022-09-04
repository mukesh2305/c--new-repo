#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define lb long double
#define ull unsigned long long
#define ui unsigned int
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

int num;
double arr[100];
double av(int n) {
	if (n < 0) return 0;
	return arr[n] + av(n - 1);
}
int main() {
	cin >> num;
	rep(i, 0, num) cin >> arr[i];
	cout << format(6) << (double)(av(num - 1) / num);

}