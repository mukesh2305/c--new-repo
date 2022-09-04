#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define lb long double
#define ull unsigned long long
#define sz(x) x.size()
#define all(x) x.begin(), x.end()
#define format(n) fixed << setprecision(n)
#define pi 3.141592653
#define nl '\n'
#define Yes cout << "Yes\n"
#define YES cout << "YES\n"
#define No cout << "No\n"
#define NO cout << "NO\n"
#define rep(i, a, b) for (int i = a; i<b; i++)
#define test(t) int t ; cin >> t ; while(t--)

// void prime_number(int n) {
// 	int i;
// 	for (i = 2; i <= n; i++)
// 		if (n % i == 0) break;
// 	if (i == n) cout << "YES\n";
// 	else cout << "NO\n";
// }
// int main() {
// 	int t;
// 	cin >> t;
// 	int n;
// 	while (t--) {
// 		cin >> n;
// 		if (n == 1) {
// 			cout << "NO\n";
// 			continue;
// 		}
// 		prime_number(n);
// 	}
// }


// ========================================

// #include<bits/stdc++.h>
// using namespace std;
// bool prime(int num){ // true false   1  0	       8     1 8
//  int newNumber = sqrt(num); // 4  //   4 3 2 
//  int flag = 0;
//  for(int i = 2;i<= newNumber;i++){
//  	if(num % i == 0){
//  		flag = 1;
//  		break;
// 	 }
//  }
//  return flag;
// }
// int main(){
// 	int size;
// 	cin>>size;  // 3
// 	while(size--){  //  3  2  1  0
// 		int num;
// 		cin>>num;
// 		if(num == 1){
// 			cout<<"NO"<<endl;
// 			continue;
// 		}
// 		int pr = prime(num);
// 		if(pr == 1){
// 			cout<<"NO"<<endl;
// 		} else {
// 			cout<<"YES"<<endl;
// 		}
// 	}
	
// }


// =====================================
bool isprime(int n)
{
    if (n == 1)
        return false;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0)
            return false;
    return true;
}
void solve();
int main()
{
    test(t)
    {
        solve();
    }
    //solve();
    return 0;
}
void solve()
{
    int n;
    cin >> n;
    cout << ((isprime(n)) ? ("YES") : ("NO")) << endl;
}