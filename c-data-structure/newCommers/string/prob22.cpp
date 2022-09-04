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

	// string value;  // "abc"   ['a','b','c']
	// cin>>value;
	// int size = value.size();
	// // 0123456789 10 11 12 13 14 15 16
	// // BRITISHEGY P  T  G  H  A  N  A
	// for(int i=0;i<size;i++){ // i =8
	// 	if(value[i] == 'E' && value[i+1] == 'G' && value[i+2] == 'Y'
	// 	                   && value[i+3] == 'P'&& value[i+4] == 'T'){
	// 	    i+=4; // 11
	// 	    cout<<" ";
	// 	} else {
	// 		cout<<value[i];
	// 	}
	// 	// i = 12
	// }



	// ======================================================
	// 	string s; cin >> s;
	// while (s.find("EGYPT") != string::npos) {
	// 	int idx= s.find("EGYPT");
	// 	s[idx] = ' ';
	// 	s.erase(s.begin() + idx+1, s.begin() + idx + 5);
	// }
	// cout << s;

	//  ==========================================

	string s;
	cin >> s;
	int pos = s.find("EGYPT");
	while (pos != -1) {

		s.replace(pos, 5, " ");
		pos = s.find("EGYPT");
	}
	cout << s;
}