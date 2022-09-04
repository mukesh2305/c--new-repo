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

// int main() {
// 	int a, b;
// 	cin >> a >> b;
// 	int minn = min(a, b);
// 	int max_gcd = 0;
// 	for(int i = 1; i<=minn; i++)
// 		if(a % i == 0 && b % i == 0) max_gcd = i;

// 	cout << max_gcd << " ";
// 	cout << (a * b)/max_gcd;
// }

// C++ program to find LCM of two numbers


// Recursive function to return gcd of a and b
ll gcd(ll  a, ll  b)
{
	if (b == 0)
		return a;
	return gcd(b, a % b);
}

// Function to return LCM of two numbers
ll lcm(ll a, ll b)
{	ll gcd_val = gcd(a, b) ;
	cout << gcd_val << " ";
	return (a / gcd_val) * b;
}

// Driver program to test above function
int main()
{
	ll a , b;
	cin >> a >> b;
	if(a > b) swap(a, b);
	cout << lcm(a, b);
	return 0;
}
