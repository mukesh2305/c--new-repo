#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    void sort012(int arr[], int n)
    {

    //0 2 1 2 0
    int start = 0, mid = 0, end = n - 1;
    int a[n];
    for(int i = 0; i<n; i++) a[i] = 1;
    for(int i = 0; i<n; i++) {
        if(arr[i] == 0) {
            a[start] = arr[i];
            start++;
            
        }else if(arr[i] == 2){
            a[end] = arr[i];
            end--;
        } else {
            
        }
    }
    
    for(int i = 0; i<n; i++) {
        arr[i] = a[i];
    }
    
} 
    
    
};

// { Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
}