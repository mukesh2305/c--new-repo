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

int main()
{
	// int n;
	// cin >> n;
	// string s;
	// cin >> s;

	// string key = "PgEfTYaWGHjDAmxQqFLRpCJBownyUKZXkbvzIdshurMilNSVOtec#@_!=.+-*/";
	// string original = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
	// if(n == 1){
	// 	for(int i = 0; i<s.size(); i++){
	// 		for(int j = 0; j <original.size(); j++) {
	// 			if(s[i] == original[j]) {
	// 				cout << key[j];
	// 				break;
	// 			}
	// 		}
	// 	}
	// } else {
	// 	for(int i = 0; i<s.size(); i++){
	// 		for(int j = 0; j <key.size(); j++) {
	// 			if(s[i] == key[j]) {
	// 				cout << original[j];
	// 				break;
	// 			}
	// 		}
	// 	}
	// }

	// =======================================================
	int n;
	cin >> n;
	string s;
	cin >> s;

	string key = "PgEfTYaWGHjDAmxQqFLRpCJBownyUKZXkbvzIdshurMilNSVOtec#@_!=.+-*/";
	string original = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
	if (n == 1)
		for (int i = 0; i < s.size(); i++)
			cout << key[original.find(s[i])];
	else
		for (int i = 0; i < s.size(); i++)
			cout << original[key.find(s[i])];
}