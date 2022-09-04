#include <bits/stdc++.h>
using namespace std;


int main() {
	string s;
	int a, b;
	cin >> a >> s  >> b;

	if(
		(s == ">" && a > b) || 
		(s == "<"  && a < b) || 
		(s == "<=" && a <= b) || 
		(s == ">=" && a >= b) || 
		(s == "=" && a == b) 
	){
		cout << "Right" << endl;
	} else {
		cout << "Wrong";
	}


}