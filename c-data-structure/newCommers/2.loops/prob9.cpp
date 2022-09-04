#include <bits/stdc++.h>
using namespace std;

int main()
{
long long number;
cin >> number;
    int decomposed = number, reversed = 0;
    while (decomposed) {
        reversed = 10 * reversed + (decomposed % 10);
        decomposed /= 10;
    }
   if(reversed == number){
       cout << number << endl;
       cout << "YES";
   }    else {
		cout << reversed << endl;
	       cout <<"NO";
	   }
   
    return 0;

}