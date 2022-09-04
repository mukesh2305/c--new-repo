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
#define rep(i, a, b) for (int i = a; i < b; i++)
#define rep_comp(i, a, b) for (int i = a; i < b - 1; i++)
#define rep_less_equal(i, a, b) for (int i = a; i < b; i++)
#define test(t) \
	int t;      \
	cin >> t;   \
	while (t--)

int main()
{
	// 	int n;
	// 	cin >> n;
	// 	int arr[n];
	// 	rep(i, 0, n) cin >> arr[i];
	// 	int count = 0;
	// 	for(int i = 0; i<n ; i++){
	// 		if(arr[i] == 0){
	// 			count++;
	// 			continue;
	// 		}
	// 		if(i)
	// 			cout << " ";
	// 		cout << arr[i] ;
	// 	}
	// 	rep(i, 0, count) {

	// 		cout<< " " << 0  ;
	// 	}

	// ==========================================
	// int n;
	// cin >> n;
	// int arr[n];
	// int temp[n] = {0}, j = 0;
	// rep(i, 0, n) cin >> arr[i];
	// rep(i, 0, n)
	// 	if(arr[i] != 0)
	// 		temp[j++] = arr[i];
	// rep(i,0, n) cout << temp[i] << " ";

	// ===========================================
	int n;
	cin >> n;
	int arr[n];
	rep(i, 0, n) cin >> arr[i];
	//  1 0 2;

	int pos = 0;
	rep(i, 0, n) if (arr[i])
		swap(arr[i], arr[pos++]);

	rep(i, 0, n) cout << arr[i] << " ";
}
