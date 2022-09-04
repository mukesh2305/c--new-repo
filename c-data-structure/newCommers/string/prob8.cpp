#include<bits/stdc++.h>
using namespace std;
int main()
{
	// int t;
	// cin >> t;
	// while (t--) {
	// 	string s1;
	// 	cin >> s1;
	// 	int index = s1.find("101")   ;
	// 	int index1 =  s1.find("010");
	// 	if (index >= 0 || index1 >= 0) cout << "Good" << endl;
	// 	else cout << "Bad" << endl;
	// }

	// =========================================

	// 000000000

	int t ;
	cin >> t;
	while (t--) {
		string s1;
		cin >> s1;
		int flag = 0;
		for (int i = 0; i < s1.size() - 2; i++)
			if (
			    (s1[i] == '0' && s1[i + 1] == '1' && s1[i + 2] == '0') ||
			    (s1[i] == '1' && s1[i + 1] == '0' && s1[i + 2] == '1')
			) {
				flag = 1;
				break;
			}

		if (flag) cout << "Good" << endl;
		else cout << "Bad" << endl;
	}


}