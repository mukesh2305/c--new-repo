


#include <bits/stdc++.h>
using namespace std;

int main()
{
	// R. Age in Days
	int input;
	int  years, months, days;
	cin >> input;
	years = input / 365;
	cout << years << " years " << endl;
	months = (input % 365)/30;
	cout << months << " months " << endl;
	days = (input % 365)%30;
	// days = input - ((years * 365) + months * 30);
	cout << days << " days"; 
	return 0;
}