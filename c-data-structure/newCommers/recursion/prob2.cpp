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

// void print(int n) {
// 	if(n > 1)
// 		print(n - 1);
// 	cout << n << nl;
// }
// int main() {
// 	int n;
// 	cin >> n;
// 	print( n);

// }

//  =====================================
void rec(int a, int n)
{
    if (a > n)
        return;
    cout << a << endl;
    rec(a + 1, n);
}
int main()
{
    int n;
    cin >> n;
    rec(1, n);
    return 0;
}