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

// const int s = 500;
// void swap_rows(int times, int x, int y, int arr[s][s]){
//     for (int i = x, k = y; i <= x, k <= y; i++, k++)
// 		for (int j = 1; j <= times; j++)
// 			swap(arr[i][j], arr[k][j]);
// } 
// void swap_colums(int times, int x, int y, int arr[s][s]){
//     	for (int i = 1 ; i <= times; i++)
// 		for (int j = x, k = y; j <= x, k <= y; j++, k++)
// 			swap(arr[i][j], arr[i][k]);
// }
// void print(int arr[s][s], int times){
//     	for (int i = 1; i <= times; i++){
// 		for (int j = 1; j <= times; j++)
// 			cout << arr[i][j] << " ";
// 		cout << endl;
// 	}
// }
// int main() {

// 	int times, x, y;
// 	cin >> times >> x >> y;
// 	int arr[s][s];
// 	for (int i = 1; i <= times; i++)
// 		for (int j = 1; j <= times; j++)
// 			cin >> arr[i][j];

// 	swap_rows(times, x, y, arr);
// 	swap_colums(times, x, y, arr);
// 	print(arr, times);

// }


//===================================

 
int main()
{
    int n, x, y;
    cin >> n >> x >> y;
    int mat[n][n];
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= n; j++)
            cin >> mat[i][j];
    }
    for (int j = 1; j < n; j++)
        swap(mat[x][j], mat[y - 1][j]);
    for (int i = 1; i < n; i++)
        swap(mat[i][x], mat[i][y]);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
            cout << mat[i][j] << " ";
        cout << endl;
    }
    return 0;
}
