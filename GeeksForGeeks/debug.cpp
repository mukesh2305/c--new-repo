#include <bits/stdc++.h>
using namespace std;

void init_code() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}


#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define MOD 1000000007
#define MOD1 998244353
#define INF 1e18
#define nline "\n"
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define PI 3.141592653589793238462
#define set_bits __builtin_popcountll
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()

void debug_code() {
#ifndef ONLINE_JUDGE
	freopen("Error.txt", "w", stderr);
#endif
}

#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x << " " ; _print(x); cerr << "\n";
#else
#define debug(x)
#endif
void _print(int a) { cerr << a ; }
void _print(long long a) { cerr << a ;}
void _print(char a) { cerr << a ; }
void _print(string a) { cerr << a ; }
void _print(bool a) { cerr << a ; }

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



int missingNumber1(int arr[], int n) {
	map<int, bool> mp;

	for (int i = 0; i <= n + 1; i++) mp[i] = false;
	debug(mp);

	for (int i = 0; i < n ; i++) mp[arr[i]] = true;
	debug(mp);

	for ( int i = 1; i <= n + 1; i++) {
		if (mp[i] == false) {
			return i;
		}
	}
	return -1;
}
int main() {
	debug_code();
	init_code();

	int arr[] = {1, 2, 3, 4, 5};
	// int arr[] = {0, -10, 1, 3, -20};
	int n = sizeof(arr) / sizeof(arr[0]);
	cout << missingNumber1(arr, n);
}