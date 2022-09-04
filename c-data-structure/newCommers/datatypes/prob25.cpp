#include <bits/stdc++.h>
using namespace std;


int main() {
	// Y. The last 2 digits
	int n, x, y, z;
cin >> n >> x >> y >> z;

int v = ((n%100)*(x%100)*(y%100)*(z%100))%100;

if(v < 10) cout << 0 << v << "\n";

else cout << v << "\n";
}