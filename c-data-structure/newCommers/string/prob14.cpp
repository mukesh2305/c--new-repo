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


// int subsequence(string s, string output[]) {
// 	if(s.length() == 0 ) {
// 		output[0] = "";
// 		return 1;
// 	}

// 	int smallerOutputSize = subsequence(s.substr(1), output) ;

// 	for(int i = 0; i< smallerOutputSize; i++) {
// 		output[smallerOutputSize + i] = s[0] + output[i];
// 	}

// 	return 2*smallerOutputSize;
// }
// int main()
// {
// 	int t ;
// 	cin >> t;
// 	string s, output[1000];
// 	cin >> s;
// 	int outputSize = subsequence(s, output);
// 	for (int i = 0; i < outputSize; i++)
// 	{
// 		cout << output[i] << nl;
// 	}

// }

// int main() {
	// string s1 ;
	// int size ;
	// cin >> size;
	// cin >> s1;
	// int temp , count = 0;
	// for(int i = 0; i< size ; i++) {
	// 	if(i == 0) {
	// 		temp = s1[i];
	// 		count++;
	// 	} else {
	// 		if(s1[i] != temp){
	// 			count++;
	// 			temp = s1[i];
	// 		}
	// 	}
	// }

	// cout << count ;


// int subsequence(string s, string output[]) {
// 	if(s.length() == 0 ) {
// 		output[0] = "";
// 		return 1;
// 	}

// 	int smallerOutputSize = subsequence(s.substr(1), output) ;

// 	for(int i = 0; i< smallerOutputSize; i++) {
// 		output[smallerOutputSize + i] = s[0] + output[i];
// 	}

// 	return 2*smallerOutputSize;
// }


// int main()
// {
// 	int t ;
// 	cin >> t;
// 	string s, output[1000];
// 	cin >> s;
// 	int outputSize = subsequence(s, output);
// 	for (int i = 0; i < outputSize; i++)
// 	{
// 		cout << output[i] << nl;
// 	}

// }

int main() {
	string s1 ;
	int size ;
	cin >> size;
	cin >> s1;
	int count = 1;
	for(int i = 0; i< size - 1 ; i++) {
		if(s1[i] != s1[i+1])
			count++;
	}

	cout << count ;
}

