#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i<n;i++) {
        cin >> a[i];
    }
    int find;
    cin >> find;
    int j;
    for( j = 0; j< n; j++){
        if(a[j] == find) {
            cout << j;
            break;
        }
    }
    if(n == j) {
        cout << -1;
    }
}

