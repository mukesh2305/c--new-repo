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
#define rep_comp(i, a, b) for (int i = a; i<b -1; i++)
#define rep_less_equal(i, a, b) for (int i = a; i<b; i++)
#define test(t) int t ; cin >> t ; while(t--)

// count number left duplicate---------------------
int main() {
	int n;
	cin >> n;

	int arr[n];
	rep(i , 0, n) cin >> arr[i];

	//  1 2 8 9 9
	// sort(arr.begin(),arr.end());

	sort(arr , arr + n);

	int  j = 0;
	rep_comp(i, 0, n)
	if (arr[i] != arr[i + 1]) j++;
	// cout << j + 1;
	cout << ++j;
}

// remove duplicate ------------

// int remove_duplicate(int arr[], int n){
// 	int temp[n];
// 	int j = 0;
// 	rep_comp(i, 0, n) {
// 		if(arr[i] != arr[i+1]) temp[j++] = arr[i];
// 	}

// 	rep_less_equal(i, 0, n) arr[i] = temp[i];
// 	return j;
// }

// int main() {
// 	int n ;
// 	cin >> n;
// 	int arr[n];
// 	rep(i, 0, n) cin >> arr[i];
// 	n = remove_duplicate(arr, n);
// 	rep_less_equal(i, 0, n) cout << arr[i] << " ";
// }