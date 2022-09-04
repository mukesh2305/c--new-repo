#include <bits/stdc++.h>
using namespace std;


int main()
{
  

	float num ;
	cin >> num;
	int n = (int)num;

	float n1 = (float)n;

	if(num == n1)
	{
	    cout << "int " << n1;
	}
	else
	{
	
	cout << fixed << setprecision(3) ;
	cout << "float " << n << " 0." << int(num * 1000) % 1000  ;
	}


	// float x ;
	// cin >> x;
	// int y = x;
	// float decimal = x - y;
	// cout << fixed << setprecision(3);

	// if(decimal = 0) {
	// 	cout << "int " << y << endl; 
	// }  else  {
	// 	cout << "float " << y << " " << decimal << endl; 
	// }

	  return 0;
}


	