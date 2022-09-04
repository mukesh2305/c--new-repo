#include <bits/stdc++.h>
using namespace std;

int main()
{
    // ------------------------------------------------------------
//     int n,just, count = 0;
//     cin >> just >> n;

//     int arr[n];
//     int newArr[n + 2] ;

//     for(int i = 0; i<n; i++) {
//     	cin >> arr[i];
//     }
//     for(int i = 0; i<n; i++) {
//     	for(int j = i + 1; j<n; j++) {
//     		newArr[count] = arr[i] + arr[j] + j - i ;
    		
//     		count++;
//     	}
//     }
// // 3 4 22 1 0
//     // low = 3
//     // low = 3 
//     // low = 3 
//     // low = 1
//     //  low = 0
// int low = newArr[0];
//     for(int i = 0; i< n+2; i++) 
//         if(newArr[i] < low) low = newArr[i];
//     cout << low;

	// ---------------------------------------------------------
 
    // int n,just, count = 0;
    // cin >> just >> n;

    // int arr[n];
    // int newArr[n + 2], low ;

    // for(int i = 0; i<n; i++) {
    // 	cin >> arr[i];
    // }
    // for(int i = 0; i<n; i++) {
    // 	for(int j = i + 1; j<n; j++) {
    // 		newArr[count] = arr[i] + arr[j] + j - i ;

    // 		if(count == 0){
    // 		    low = newArr[0];
    // 		}
    //         if(newArr[count] < low) {
    //             low = newArr[count];
    //         };
    // 		count++;
    // 	}
    // }

    // cout <<  low ;
    // -----------------------------------------------------------

   
    int n,just, flag = 1, result, low;
    cin >> just >> n;

    int arr[n];
   

    for(int i = 0; i<n; i++) {
    	cin >> arr[i];
    }
    for(int i = 0; i<n; i++) {
    	for(int j = i + 1; j<n; j++) {
    		result= arr[i] + arr[j] + j - i ;
    	}
    	if(flag) {
    	  low  =  result;
    	  flag = 0;
    	}
    	if(result <low ) low = result;
    }

    cout <<  low ;
    
    
}
    
    
