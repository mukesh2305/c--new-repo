#include <bits/stdc++.h>
using namespace std;
// long long 

int main()
{
	int n1, n2;
	cin >> n1 >> n2;
	string s1 ;
	cin >> s1; 
	if(n1+n2+1 != s1.size()){
		cout << "No" << endl;
		return 0;
	}
	
	if(s1[n1] != '-') {
		cout << "No";
		return 0;
	};
	int counter = 0;
	for(int i = 0; i<s1.size(); i++) 
	 	if(s1[i] >= 48 && s1[i] <= 57 && i != n1) counter++;	

	if(counter == n1 + n2) cout << "Yes";
	else cout << "No"; 

}