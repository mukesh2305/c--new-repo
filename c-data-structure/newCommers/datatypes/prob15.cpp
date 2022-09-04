#include <bits/stdc++.h>
using namespace std;

int main() {
	// O. Calculator
	int a , b ;
	char oper;
	cin >> a >> oper >> b  ;
	if(oper == 43) 
		cout << a+b;
	else if(oper == 45 ) 
			cout << a-b;
	else if(oper == 47)
			 cout << a/b;
	else 
		cout << a*b;
	return 0;

	// char str;  // 1+12
	// cin >> str;
	// int indexop;
	// string num1, num2;
	// char charop;
	// for(int i = 0; i<str.size(); i++) {
	// 	if(str[i] == "+" || str[i] == "-" || str[i] == "/" || str[i] == "*") {
	// 		charop = str[i];
	// 		indexop = i;
	// 		break;
	// 	}
	// }
	// num1 = str.substr(0, indexop);
	// num2 = str.substr(indexop+1) // it automatically give other index;
	// stringstream ss;


}