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
	// int n;
	// cin >> n;
	// int min,max = 0,  arr[n];
	// rep(i , 0, n) {
	// 	cin >> arr[i];
	// 	if(i == 0) min = arr[0];
	// 	if(arr[i] < min) min = arr[i];
	// 	if(arr[i] > max) max = arr[i];
	// }
	// cout << min << " " << max; 

	// =================================
	int n, x;
    cin >> n;
    int maxx = INT_MIN, minn = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        minn = min(minn, x);
        maxx = max(maxx, x);
    }
    cout << minn << " " << maxx << endl;
}