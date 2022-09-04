#include <bits/stdc++.h>
using namespace std;

void init_code() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}


#define fastio()         ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define MOD              1000000007
#define MOD1             998244353
#define INF              1e18
#define nl               "\n"
#define pb               push_back
#define ppb              pop_back
#define setbits(x)       __builtin_popcountll(x);
#define zerobits(x)      __builtin_ctzll(x);
#define ps(x, y)         fixed<<setprecision(y)<<x
#define mp 				 make_pair
#define ff 				 first
#define ss               second
#define PI               3.141592653589793238462
#define sz(x)           ((int)(x).size())
#define all(x)          (x).begin(), (x).end()

typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;


#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x << " " ; _print(x); cerr << "\n";
#else
#define debug(x)
#endif

void debug_code() {
#ifndef ONLINE_JUDGE
	freopen("Error.txt", "w", stderr);
#endif
}

void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(lld t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(ull t) {cerr << t;}

template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}

int gcd(int a, int b) {
	return b == 0 ? a : gcd(b, a % b);
}
ll lcm(int a, int b) {
	ll a0 = a;
	ll b0 = b;
	return a0 * b0 / __gcd(a0, b0);
}
////////////////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////
// heapify 


int main() {
	debug_code();
	init_code();

	// int A[] = {3, 5, 10, 10, 10, 15, 15, 20};
	// int B[] = { 5, 10, 10, 15, 30};
	// int m = sizeof(A) / sizeof(A[0]);
	// int n = sizeof(B) / sizeof(B[0]);
	// intersection_array_merge(A, m, B, n);
	// LA(A, m);

	// int arr [] = {0, 1, 1, 2, 0, 1};
	// int n = sizeof(arr) / sizeof(arr[0]);
	// // sort012(arr, n);

	// sort012(arr, n);
	// for(auto it : arr) cout << it << " " ;

}