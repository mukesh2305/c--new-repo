#include <bits/stdc++.h>
using namespace std;
#define ll long long;
#define lb long double;
#define ull unsigned long long;
#define sz(x) x.size()
#define all(x) x.begin(), x.end()
#define format(n) fixed << setprecision(n)
#define pi 3.141592653
#define nl '\n'
#define Yes cout << "Yes\n"
#define YES cout << "YES\n"
#define No cout << "No\n"
#define NO cout << "NO\n"

int main() {
	// int n;
	// cin >> n;
	// string s1;
	// cin >> s1;
	

	// for (int i = 1; i <=  n - 1 ; i++) {
	// 	for (int j = 0; j < n - i; j++) {
	// 		if (s1[j] > s1[j + 1]) {

	// 			// swap(s1[j], s1[j + 1]);
	// 			int temp;
	// 			temp = s1[j + 1];
	// 			s1[j + 1] = s1[j];
	// 			s1[j] = temp;
	// 		}
	// 	}
	// }

	// for (int i = 0; i < sz(s1); i++)
	// 	cout << s1[i];

	// ==========================================
	int n;
	cin >> n;
	int arr[26] = {0}, count = 0;
	char c;
	for(int i = 0; i<n; i++) {
		
		cin >> c;
		arr[int(c) - 97]++;
	}

	for(int i = 0; i<26; i++) {
		if(arr[i] != 0){
			cout << (char)(i + 97) ;
			count++;
			if(count == n) return 0;
		}
	}

}