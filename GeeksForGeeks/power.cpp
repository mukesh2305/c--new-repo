#include <bits/stdc++.h>
using namespace std;
// int power(int x, int n) {
// 	int res = 1;
// 	while(n > 0) {
// 		cout << " res = " << res << " x = " << x << " n = " << n << "\n";
// 		if(n & 1)
// 			res = res * x ;
// 		x = x * x;
// 		n = n >> 1; // n = n/2 ;
// 	}
// 	return res;
// }

// n = 10 x = 2
//  ( 2 ^ 10) = (2  * 2) ^ 5 = ( 4 ^ 5);      n = even so n /=2    and  x * x
//  ( 4 ^ 5) = 4 * ( 4 ^ 4);                  n is odd so n - 1    and x * (x ^ n -1)
//  (4 ^ 4) = ( 4 * 4) ^ 2 = (16 ^ 2)         n = even so n /=2    and  x * x
//  (16 ^ 2) = (16 * 16) ^ 1; n =             n = even so n /=2    and  x * x
//  (256)^ 1 = 256 * (256 ^ 0) = 256          n = odd so n - 1     and x * (x ^ n -1)

double pow_func(int x, int n, double ans)
{
	if (n == 0)
		return 1;
	else if (!(n & 1))
	{
		ans = pow_func(x, n / 2, ans);
		return ans * ans;
	}
	else
	{
		return x * pow_func(x, n - 1, ans);
	}
}

// logorithmic solution work in all the values of factorial

int calculate_digit_in_factorial(int N)
{
	double fact = 0;
	for (int i = 1; i <= N; i++)
		fact += log10(i);
	return floor(fact + 1);
}


// this will also not work in much bigger values like 8468;
int calculate_digit_in_factorial1(int N)
{
	if (N <= 1)
		return 1;
	int fact = 1;
	for (int i = 1; i <= N; i++)
		fact *= i;
	int count = 0;
	while (fact != 0)
	{
		fact /= 10;
		count++;
	}
	return count;
}


// this will also not work in much bigger values like 8468;
int calculate_digit_in_factorial2(int N)
{
	double fact = 1;
	for (int i = 1; i <= N; i++)
		fact *= i;
	string str = to_string(fact);
	int c = '.';
	size_t index = str.find(c); // 120.0 // length = 5 // index of . = 3 // we want length of 120 = 3
	return index;
}

int gp_series(int A, int B , int n) {
	double a = A;
	double b = B;
	double r = b / a;
	return a * pow(r, n - 1);
}

void divisor(int n ) {
	for (int i = 1; i * i <= n ; i++) {
		if (n % i == 0)
			cout << i <<  " " ;
		// this condition because number does not repeat
		if (i != n / i) cout << n / i << " ";
	}
}
void print_divisor_sorted(int n ) {
	int i;
	for (i = 1; i * i <= n; i++) {
		if (n % i == 0) cout << i << " ";
	}
	for ( ; i >= 1; i--) {
		if (n % i == 0) {
// this condition because number does not repeat
			if (i != n / i) cout << n / i << " ";
		}
	}
}


// time complexity is = O(n * sqrt(n))
void count_exact_3_divisor(int N) {
	int totalCount = 0;
	for (int n = 1; n  <= N; n++) {
		int count = 0;
		for (int i = 1; i * i <= n ; i++) {
			if (n % i == 0) {
				count++;
				if (i != n / i) count++;
			}
		}

		if (count == 3) totalCount++;
	}
	cout << totalCount;
}

//  count_exact_3_divisor prime number has 2 divisor but square of prime number has 3 divisor
bool isPrime(int n) {
	if (n == 0 || n == 1) return false;
	if (n == 2 || n == 3) return true;
	if (n % 2 == 0 || n % 3 == 0) return false;

	for (int i = 5; i * i <= n; i += 6)
		if (n % i == 0 || n % (i + 2) == 0) return false;
	return true;
}
void count_exact_3_divisor_efficient(int N) {
	int count = 0;
	for (int i = 2; i * i <= N; i++)
		if (isPrime(i)) count++;
	cout << count;
}


void add_two_large_numbers(string a, string b) {
	int len_a = a.length();
	int len_b = b.length();

	int carry = 0;
	string blow = "";
	blow.resize(len_a + 1 );
	int flag = 0;
	int num;
	for (int i = len_a - 1; i >= 0; i--) {
		num = (a[i] - '0') + (b[i] - '0') + carry ;

		if (num > 9) {
			blow[i + 1] = (num % 10) + '0';
			carry = num / 10;
			if (i == 0) blow[0] = carry + '0';
		} else {
			if ( i == 0) flag = 1;
			blow[i + 1] = num + '0';
			carry = 0;
		}
	}
	if (flag == 1) cout << blow.substr(1);
	else cout << blow ;
}
// 1234
// 12

string findSum(string a, string b) {
	//  a = "198111" b = "12"
	//  a = "12"  b = "198111"
	if (a.length() > b.length()) swap(a, b);

	string str = "";

	int n1 = a.length(), n2 = b.length();

	// reverse both the string
	// a = "12"  b = "198111"
	// a = "21" b = "111891"
	reverse(a.begin(), a.end());
	reverse(b.begin(), b.end());

	int carry = 0;
	for (int i = 0; i < n1; i++) {
		int sum = ((a[i] - '0') + (b[i] - '0')  + carry);
		str.push_back(sum % 10 + '0');

		// calculate the carray of larger number
		carry = sum / 10;
	}

	for (int i = n1; i < n2; i++) {
		int sum = ((b[i] - '0') + carry);
		str.push_back(sum % 10 + '0');

		// calculate the carray of larger number
		carry = sum / 10;
	}

	//  add reamaning carray 
	if(carry) {
		str.push_back(carry + '0');
	}

	// revverse string
	reverse(str.begin(), str.end());
	return str;
}

// multiplicative inverse 
int mul_inverse(int a, int m) {
	// int i = 1;
	int i = 1;
	while(i < m) {
		if((a * i) % m == 1) return i;
		i++;
	}
	return -1;

}
int main()
{
	// int n,  x;
	// cin >> x  >> n;
	// double ans = 1;
	// cout << pow_func(x, n, ans);

	// int n = 8468;
	// cout << calculate_digit_in_factorial(n);
	// cout << calculate_digit_in_factorial1(n);
	// cout << calculate_digit_in_factorial2(n);


	// int a = 87, b = 93, n = 5;
	// cout << gp_series(a, b, n);

	// int n = 12;
	// divisor(n);

	// print divisor in sorted order
	// int n = 6;
	// print_divisor_sorted(n);

	// small number than n has exact 3 divisor
	// int n = 6;
	// count_exact_3_divisor(n);

	// small number than n has exact 3 divisor
	// int n = 6;
	// count_exact_3_divisor_efficient(n);



// ====================================================================
	// sum two large numbers
	// string a = "2223372036854775807";
	// string b = "2223372036854775807";

	// string a = "9223372036854775807";
	// string b = "9223372036854775807";

	// string a = "9223372036854775807";
	// string b = "9223372";

	// string a = "12";
	// string b = "198111";

	// string a = "1234";
	// string b = "12";

	// if (a.length() < b.length()) {
	// 	string tmp_a = a;
	// 	int tmp_al = tmp_a.length();
	// 	a.resize(b.length());
	// 	int point = b.length() - tmp_al;
	// 	int j = 0;
	// 	for (int i = 0; i < a.length(); i++) {
	// 		if (i >= point) {
	// 			a[i] = tmp_a[j++];
	// 		} else a[i] = '0';
	// 	}
	// 	swap(a, b);

	// } else if (b.length() < a.length()) {
	// 	string tmp_b = b;
	// 	int tmp_bl = tmp_b.length();
	// 	b.resize(a.length());
	// 	int point = a.length() - tmp_bl;
	// 	int j = 0;
	// 	for (int i = 0; i < b.length(); i++) {
	// 		if (i >= point) {
	// 			b[i] = tmp_b[j++];
	// 		} else b[i] = '0';
	// 	}
	// }

	// add_two_large_numbers(a, b);
// ============================================================
	// 2nd way to calculate sum of two number
// 	string a = "198111";
// 	string b = "12";

// 	cout << findSum(a, b);

	// ===========================================
	int a = 3 , m = 11;
	cout << mul_inverse(a, m);
}
