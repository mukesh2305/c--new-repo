#include <bits/stdc++.h>
using namespace std;

int main() {
	// N. Char
	char strChar, newV;
	 cin >> strChar;
	 // cout << (0 && islower(strChar));
	 if(islower(strChar)) {
	 	 newV = toupper(strChar);
	 	// cout << newV;
	 } else if(isupper(strChar)) {
	 	 newV = tolower(strChar);
	 }
	 cout << newV;
	 return 0;
}