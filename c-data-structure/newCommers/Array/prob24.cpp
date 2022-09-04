#include<bits/stdc++.h>
using namespace std;
int main()
{
	// int row, column, count1 = 0, count2 = 0;
	// cin >> row >> column;
	// char arr[101][101];  //   0 0 0 0 0 0 0 0 0 0
	// for (int i = 1; i <= row; i++) {
	// 	for (int z = 1; z <= column; z++) {
	// 		cin >> arr[i][z];
	// 		if (arr[i][z] == 'x') 
	// 			count1++;
	// 		else if (arr[i][z] == '.') 
	// 			count2++;
	// 	}
	// }

	// int rowIn, columnIn;
	// cin >> rowIn >> columnIn;
	// if (count1 == 9)
	// 	cout << "yes";
	// else if (count2 == 9)
	// 	cout << "no";
	// else if (count1 > 2 && arr[rowIn][columnIn ] == '.')
	// 	cout << "yes";
	// else if (count2 > 2 && arr[rowIn][columnIn ] == 'x')
	// 	cout << "yes";
	// else
	// 	cout << "no";


	// ------------------------------------------------------------------------------
	int row,column;
	cin>>row>>column;
	char arr[101][101];  //   0 0 0 0 0 0 0 0 0 0
	for(int i=1;i<=row;i++){
		for(int z=1;z<=column;z++){
			cin>>arr[i][z];
		}
	}
	int rowIn,columnIn;
	cin>>rowIn>>columnIn;
	if(arr[rowIn][columnIn-1] != '.' &&
	   arr[rowIn][columnIn+1] != '.' &&
	   arr[rowIn - 1][columnIn] != '.' &&
	   arr[rowIn + 1][columnIn] != '.' &&
	   arr[rowIn - 1][columnIn - 1] != '.' &&
	   arr[rowIn - 1][columnIn + 1] != '.' &&
	   arr[rowIn + 1][columnIn - 1] != '.' &&
	   arr[rowIn + 1][columnIn + 1] != '.'){
		cout<<"yes";
	} else {
		cout<<"no";
	}


}