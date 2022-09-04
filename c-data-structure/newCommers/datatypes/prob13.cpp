// M. Capital or Small or Digit

#include <bits/stdc++.h>
using namespace std;
#define len 30

int main() {
	char mychar;
	cin >> mychar ;

	if(mychar >= 48 && mychar <= 57) {
		cout << "IS DIGIT";
	} else if(mychar >= 65 && mychar <= 90) {
		cout << "ALPHA" << endl;
		cout << "IS CAPITAL" << endl;
	} else {
		cout << "ALPHA" << endl;
		cout << "IS SMALL" << endl;
	}

	return 0;
}