// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// #define lb long double
// #define ull unsigned long long
// #define sz(x) x.size()
// #define all(x) x.begin(), x.end()
// #define format(n) fixed << setprecision(n)
// #define pi 3.141592653
// #define nl '\n'
// #define Yes cout << "Yes\n"
// #define YES cout << "YES\n"
// #define No cout << "No\n"
// #define NO cout << "NO\n"
// #define rep(i, a, b) for (int i = a; i<b; i++)
// #define rep_comp(i, a, b) for (int i = a; i<b -1; i++)
// #define rep_less_equal(i, a, b) for (int i = a; i<b; i++)
// #define test(t) int t ; cin >> t ; while(t--)

// void prime(int *arr, int n) {
// 	cout << "The number of prime numbers : ";
// 	int count = 0;
// 	for (int i = 0; i < n; i++) {
// 		int j;
// 		int flag = 0;
// 		for ( j = 2; j*j <= arr[i]; j++) {
// 			if (arr[i] % j == 0) {
// 				flag = 1;
// 				break;
// 			};
// 		}
// 		if (flag == 0 && arr[i] != 1) count++;
// 	}
// 	cout << count;
// }
// void palindrome(int *arr, int n) {
// 	cout << "The number of palindrome numbers : ";
// 	int count = 0;
// 	for (int i = 0; i < n; i++)
// 	{
// 		int store = 0;
// 		int temp = arr[i];
// 		while (temp) {
// 			store = store * 10 + temp % 10;
// 			temp /= 10;
// 		}
// 		if (store == arr[i]) count++;
// 	}
// 	cout << count;
// }
// void divisor(int *arr, int n) {
// 	int count[n] = {0};
// 	for (int i = 0; i < n; i++) {
// 		for (int j = 1; j <= arr[i]; j++) {
// 			if (arr[i] % 2 == 0) count[i]++;
// 		}
// 	}
// 	int max =  *max_element(count, count+n);
// 	rep(i, 0, n)
// 		if(max == count[i])
// 			cout << "The number that has the maximum number of divisors : " << arr[i];

// }
// int main() {
// 	int n;
// 	cin >> n;
// 	int arr[n];
// 	for (int i = 0; i < n; i++)
// 		cin >> arr[i];

// 	cout << "The maximum number : " << *max_element(arr, arr + n) << nl ;
// 	cout << "The minimum number : " << *min_element(arr, arr + n)  << nl;
// 	prime(arr, n);
// 	cout << nl;
// 	palindrome(arr, n);
// 	cout << nl;
// 	divisor(arr, n);
// }




#include <bits/stdc++.h>
using namespace std;
bool ispalindrome(int n)
{
    int x = 0, tmp = n;
    while (tmp)
    {
        x = x * 10 + tmp % 10;
        tmp /= 10;
    }
    //cout << x << endl;
    if (x == n)
        return true;
    return false;
}
bool isprime(int n)
{
    if (n == 1)
        return false;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0)
            return false;
    return true;
}
int div_cnt(int n)
{
    int cnt = 0;
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            if (i * i == n)
                cnt++;
            else
                cnt += 2;
        }
    }
    return cnt;
}
int main()
{
    int n, x;
    cin >> n;
    int maxx = INT_MIN, minn = INT_MAX;
    int primes = 0;
    int palindromes = 0;
    int max_div = 0, max_num = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        maxx = max(maxx, x);
        minn = min(minn, x);
        if (ispalindrome(x))
            palindromes++;
        if (isprime(x))
            primes++;
        int divisors = div_cnt(x);
        if (divisors > max_div)
        {
            max_num = x;
            max_div = divisors;
        }
        else if (divisors == max_div)
            max_num = max(max_num, x);
    }
    cout << "The maximum number : " << maxx << endl;
    cout << "The minimum number : " << minn << endl;
    cout << "The number of prime numbers : " << primes << endl;
    cout << "The number of palindrome numbers : " << palindromes << endl;
    cout << "The number that has the maximum number of divisors : " << max_num << endl;
    return 0;
}

// The maximum number : 8
// The minimum number : 1
// The number of prime numbers : 2
// The number of palindrome numbers : 4
// The number that has the maximum number of divisors : 8
