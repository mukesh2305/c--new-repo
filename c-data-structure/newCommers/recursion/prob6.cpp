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
// int i = 0, flag = 1;
// void even_indices(int *arr, int n) {
// 	if(i == 0 && flag) {
// 		i = n - 1;
// 		flag = 0;
// 	}
// 	if (i == 0) {
// 		cout << arr[i] << " ";
// 		return;
// 	}
// 	if (i % 2 == 0 ) {
// 		cout << arr[i] << " ";
// 		i--;
// 		even_indices(arr, n);
// 	} else {
// 		i--;
// 		even_indices(arr, n);

// 	}


// }
// int main() {
// 	int n;
// 	cin >> n;
// 	int arr[n];
// 	rep(i, 0, n) cin >> arr[i];
// 	even_indices(arr, n);
// }


// ===========================================
void even_indices(int *arr, int n){
	if(n == 0) return;
	if((n & 1)) cout << arr[n - 1] << " ";
	return even_indices(arr, n - 1);
}
int main() {
	int n;
	cin >> n;
	int arr[n];
	rep(i, 0, n) cin >> arr[i];
	even_indices(arr, n);
}


// ls -1 *.json | while read jsonfile; do mongoimport -d database_name -c collection_name --file $jsonfile --jsonArray --type json;done