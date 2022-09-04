#include <bits/stdc++.h>
using namespace std;
#define nl "\n";

// print power of 2 for number

int power_of_2(int n)
{
	if (n == 1)
		return 0;
	// return 1 + power_of_2(n/2); // every n /2 it addeds 1 so it will find power of 2
	return 1 + power_of_2((n >> 1)); // right shirt 2 is also divide by 2
}

// print binary using rcusrion=
void deci_to_binary(int n)
{
	if (n == 0)
		return;
	deci_to_binary(n / 2);
	cout << n % 2;
}

// print n to 1 using recursion
// quicksort is tail recursive so that's why it is faster because in tail recursive function compiler make optimiZation
void print_n_1(int n)
{ // this function is tail recursive
	if (n == 0)
		return;		  // tail recursive function are faster
	cout << n << " "; // in tail recursive function compiler make optimization
	print_n_1(n - 1);
}

void print_1_n(int n)
{ // this function is not tail recursive
	if (n == 0)
		return;		  // so this function is not fater as tail recursive
	print_1_n(n - 1); // if it is possible than make functioon tail recursive so it will run fater
	cout << n << " ";
}

// ======================================================
// simple and tail recursive function for factorial

// simple
int fact_simp(int n)
{
	if (n == 0 || n == 1)
		return 1;
	return n * fact_simp(n - 1);
}

// tail recursive for fact // take less time and less auxilary space
int fact_tail(int n, int k)
{ // k = 1 in the starting
	if (n == 0 || n == 1)
		return 1;
	return fact_tail(n - 1, k * n); // this is tail recursive factorial function it is faster
}

// ==============================================
int sum(int n)
{
	if (n == 0)
		return 0;
	return n + sum(n - 1);
}

// =========================================
bool palindrome(string s, int n, int i)
{
	if (i >= n / 2)
		return true;
	if (s[i] != s[n - i])
		return false;
	return palindrome(s, n, ++i);
}

bool palindrome_1(string s, int low, int high)
{
	if (low >= high)
		return true;
	if (s[low] != s[high])
		return false;
	return palindrome_1(s, low + 1, high - 1);
}
// ==========================================================
// sum of all the digits
int sum_of_all_digits(int n, int sum)
{
	if (n == 0)
		return sum;
	// sum += (n % 10);
	return sum_of_all_digits(n / 10, sum + (n % 10));
}

// 2nd way
int sum_of_all_digits1(int n)
{
	if (n == 0)
		return 0;
	return n % 10 + sum_of_all_digits1(n / 10);
}
// =============================================================
// cutting the rop
int cutting_rop(int n, int a, int b, int c)
{
	if (n == 0)
		return 0;
	if (n < 0)
		return -1;
	int res;
	// cout << " n = " << n  << " a = " << a << " b = " << b << " c = " << c << endl;
	res = max(
		cutting_rop(n - a, a, b, c),
		max(
			cutting_rop(n - b, a, b, c),
			cutting_rop(n - c, a, b, c)));

	if (res == -1)
		return -1;
	cout << " res " << res << endl;
	return res + 1;
}

int cutting_rop1(int n, int a, int b, int c)
{
	if (n == 0)
		return 0;
	if (n < 0)
		return -1;

	int firstChild = cutting_rop(n - a, a, b, c);
	int secondChild = cutting_rop(n - b, a, b, c);
	int thirdChild = cutting_rop(n - c, a, b, c);
	int mxChild = max(
		firstChild,
		max(secondChild, thirdChild));
	if (mxChild == -1)
		return -1;
	return ++mxChild;
}
// /////////////////////////////////////////////////////////
//  subset or substring find out from the string
void subset(int i, string &str, string vec)
{
	if (i == str.length())
	{
		cout << vec;
		cout << "\n";
		return;
	}

	subset(i + 1, str, vec + str[i]);
	subset(i + 1, str, vec);
}
// 2nd way
void subset1(int i, string &str, string vec)
{
	if (i == str.length())
	{
		cout << vec;
		cout << "\n";
		return;
	}
	// vec += str[i];
	vec.push_back(str[i]);
	subset(i + 1, str, vec);
	vec.pop_back();
	subset(i + 1, str, vec);
}
// ///////////////////////////////////////////////////////////////
// tower of honai(brahma ji)

void tower(char s, char d, char h, char n)
{
	if (n == 1)
	{
		cout << s << " to " << d << endl;
		return;
	}
	tower(s, h, d, n - 1);
	cout << s << " to " << d << endl;
	tower(h, d, s, n - 1);
}

// sort array
//////////////////////////////////////////////////////////
void insertEle(vector<int> &arr, int temp)
{
	if (arr.size() == 0 || arr[arr.size() - 1] <= temp)
	{
		arr.push_back(temp);
		return;
	}
	int value = arr[arr.size() - 1];
	arr.pop_back();

	insertEle(arr, temp);
	arr.push_back(value);
	return;
}

void sorting(vector<int> &arr)
{
	if (arr.size() == 1)
		return;

	int temp = arr[arr.size() - 1];
	arr.pop_back();
	sorting(arr);
	insertEle(arr, temp);
}

// ////////////////////////////////////////////
// joseph problem

void josep(vector<int> &vec, int k, int index, int &ans)
{
	if (vec.size() == 1)
	{
		ans = vec[0];
		return;
	}

	index = (index + k) % vec.size();
	vec.erase(vec.begin() + index);
	josep(vec, k, index, ans);
}

// subset whos sum is particular number
/////////////////////////////////////////////////////////////////////
void sum_of_subset_is(int index, int n, vector<int> &vec, int arr[], int sum, int &cnt, int key)
{
	if (index == n)
	{
		if (sum == key)
			cnt++;
		// if (sum == 8 ) {

		// 	for (auto it : vec) cout << it << " ";
		// 	cout << "\n";
		// }

		return;
	}

	vec.push_back(arr[index]);
	sum += arr[index];
	sum_of_subset_is(index + 1, n, vec, arr, sum, cnt, key);
	vec.pop_back();
	sum -= arr[index];
	sum_of_subset_is(index + 1, n, vec, arr, sum, cnt, key);
}

// /////////////////////////////////////////////////////////////////////////////
//  permutation of arraay element

void permutation_of_array(vector<int> &ds, vector<int> &nums, vector<vector<int>> &ans, int freq[])
{
	if (ds.size() == nums.size())
	{
		ans.push_back(ds);
		return;
	}

	for (int i = 0; i < nums.size(); i++)
	{
		if (!freq[i])
		{
			ds.push_back(nums[i]);
			freq[i] = 1;
			permutation_of_array(ds, nums, ans, freq);
			freq[i] = 0;
			ds.pop_back();
		}
	}
}

// permutation of string

void permutation_of_string(string &ds, string &str, int freq[])
{
	if (ds.length() == str.length())
	{
		cout << ds << endl;
		return;
	}

	for (int i = 0; i < str.length(); i++)
	{
		if (!freq[i])
		{
			ds.push_back(str[i]);
			freq[i] = 1;
			permutation_of_string(ds, str, freq);
			freq[i] = 0;
			ds.pop_back();
		}
	}
}

// pracatice problem
// ///////////////////////////////////////////
void print(int n)
{
	if (n == 0)
		return;
	print(n - 1);
	cout << n << " ";
}

int sumOfDigit(int n)
{
	if (n == 0)
		return 0;
	return n % 10 + sumOfDigit(n / 10);
}

int digit_count(int n)
{
	if (n < 10)
		return 1;
	return 1 + digit_count(n / 10);
}

int sum_digital_root1(int n)
{
	if (n == 0)
		return 0;
	int sum = n % 10 + sum_digital_root1(n / 10);
	if (sum > 9)
	{
		return sum_digital_root1(sum);
	}
	return sum;
}
int sum_digital_root(int n)
{
	if (n == 0)
		return 0;
	int sum = n % 10 + sum_digital_root(n / 10);
	while (sum > 9)
	{
		sum = sum % 10 + sum_digital_root(sum / 10);
	}
	return sum;
}

int fibonaci(int n)
{
	if (n == 0)
		return 0;
	if (n == 1 || n == 2)
		return 1;
	return fibonaci(n - 1) + fibonaci(n - 2);
}
long long toh(int N, int from, int to, int aux)
{

	// Your code here
	if (N == 1)
	{
		cout << "move disk " << 1 << " from rod " << from << " to rod " << to << "\n";
		return 1;
	}
	toh(N - 1, from, aux, to);
	cout << "move disk " << N << " from rod " << from << " to rod " << to << "\n";
	toh(N - 1, aux, to, from);

	return pow(2, N) - 1;
}

// 1 to 7 = 7
int josephus(int n, int k)
{
	if (n == 1)
	{
		return 1;
	}

	int x = josephus(n - 1, k);

	int y = ((x + k - 1) % n) + 1;
	return y;
}

// 0 to 6 = 7
int josephus1(int n, int k)
{
	if (n == 1)
	{
		return 1;
	}

	int x = josephus(n - 1, k);

	int y = (x + k) % n;
	return y;
}

// ///////////////////////////////////////
// lucky numbers

bool lucky_numbers(int n, int counter)
{
	if (counter > n)
		return true;
	if (n % counter == 0)
		return false;
	return lucky_numbers(n - n / counter, counter + 1);
}

bool lucky_numbers1(int n)
{
	for (int cnt = 2; cnt <= n; cnt++)
	{
		if (cnt > n)
			return true;
		if (n % cnt == 0)
			return false;
		n = n - n / cnt;
	}
}

// ////////////////////////////////////////////////
// write power function

double pow_func1(int x, int n)
{
	if (n == 0)
		return 1;
	else if (!(n & 1))
	{
		int ans = pow_func1(x, n / 2);
		return ans * ans;
	}
	else
	{
		return x * pow_func1(x, n - 1);
	}
}

double pow_func2(int x, int n)
{
	if (n == 0)
	{
		return 1;
	}
	return x * pow_func2(x, n - 1);
}
// iterative solution
int pow_func3(int n, int p)
{
	int result = 1; // when p == 0
	while (p > 0)
	{
		//  this code run when power is even
		if (p % 2 == 1)
			result = result * n;
		// this code run when power is even
		n *= n;
		p /= 2;
	}

	return result;
}
//  power function using modulo arithmatic
long long M = 1000000007;
long long pow_func(int n, int r)
{
	if (r == 0)
		return 1;
	long long tmp = pow_func(n, r / 2);
	long long ans = (tmp * tmp) % M;
	if (r & 1)
		ans = (ans * n) % M;
	return ans;
}

//////////////////////////////////////////////////////////////////////////
// /Function to return the lexicographically sorted power-set of the string.

vector<string> powerSet(int i, string &s, string temp = "")
{
	if (i == s.length())
		return vector<string>{temp};

	vector<string> res2 = powerSet(i + 1, s, temp + s[i]);
	vector<string> res1 = powerSet(i + 1, s, temp);

	res1.insert(res1.end(), res2.begin(), res2.end());
	return res1;
}

// without using map calculate number of occurence of character
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     string s = "abaacdeefssrwr";
//     vector<int> vec ;
//     // vec.fill(vec.begin(), vec.end(), 0);
//     for(int i = 0; i<26; i++) {
//         vec.push_back(0);
//     }
//     for(int i = 0; i<26; i++) {
//         char str = s[i];
//         vec[str - 'a']++;
//     }
//     int mx = 0;
//     char val ;
//     for(int i = 0; i<vec.size(); i++) {
//         if(vec[i] > mx) {
//             mx = vec[i];
//             val = 'a' + i;
//         }
//     }

//     // for(auto it : vec) cout << it << " ";
//     // cout << endl;
//     cout << mx << " " << val << endl;
// }
const char hashTable[10][5] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

void printWordsUtil(int number[], int curr_digit, string output, int n, vector<string> &res)
{
	int i;
	// base case, if current output word is prepared.
	if (curr_digit == n)
	{
		// pushing the word in output list.
		res.push_back(output);
		return;
	}

	// trying all 3 possible characters for current digit in number[]
	// and calling recursive function for remaining digits.
	for (i = 0; i < strlen(hashTable[number[curr_digit]]); i++)
	{
		output.push_back(hashTable[number[curr_digit]][i]);
		printWordsUtil(number, curr_digit + 1, output, n, res);
		if (number[curr_digit] == 0 || number[curr_digit] == 1)
			return;
		output.pop_back();
	}
}

// Function to find list of all words possible by pressing given numbers.
vector<string> possibleWords(int a[], int N)
{
	vector<string> res;
	string result;
	printWordsUtil(a, 0, result, N, res);

	// returning the result.
	return res;
}

// phone keypad comibiantion
void solve(string digits, string output, int index, vector<string> &ans, string mapping[])
{
	//  base case
	if (index >= digits.length())
	{
		ans.push_back(output);
		return;
	}

	int number = digits[index] - '0'; // if suppose we find number as 2 than value is "abc"
	string value = mapping[number];

	for (int i = 0; i < value.length(); i++)
	{
		output.push_back(value[i]);
		solve(digits, output, index + 1, ans, mapping);
		output.pop_back();
	}
}
vector<string> letter_combination(string digits)
{

	vector<string> ans;
	if (digits.length() == 0)
		return ans;
	string output;
	int index = 0;
	string mapping[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
	solve(digits, output, index, ans, mapping);
	return ans;
}

// reverse array
vector<int> reverse_array(vector<int> arr, int i)
{
	if (i >= arr.size() / 2)
	{
		return arr;
	}
	swap(arr[i], arr[arr.size() - 1 - i]);
	return reverse_array(arr, i + 1);
}

// string is palidrome
bool palindrome_out(string str, int i)
{
	if (i >= str.length() / 2)
		return true;
	if (str[i] != str[str.length() - 1 - i])
		return false;
	return palindrome_out(str, i + 1);
}

// fibonaci number
int fibo(int n)
{
	if (n == 0)
		return 0;
	if (n == 1 || n == 2)
		return 1;
	return fibo(n - 1) + fibo(n - 2);
}

// print subsequence of array
void print_subset(int arr[], int n, vector<int> &vec, int index)
{
	if (index == n)
	{
		for (auto it : vec)
			cout << it << " ";

		if (vec.size() == 0)
			cout << "{}";
		cout << nl;
		return;
	}

	vec.push_back(arr[index]);
	print_subset(arr, n, vec, index + 1);
	vec.pop_back();
	print_subset(arr, n, vec, index + 1);
}

// print subsequnce whose sum is k
void printF(int arr[], vector<int> &vec, int index, int n, int k, int sum)
{
	if (index == n)
	{
		if (vec.size() != 0 && sum == k)
		{
			for (auto it : vec)
				cout << it << " ";
			cout << nl;
		}
		return;
	}

	vec.push_back(arr[index]);
	sum += arr[index];
	printF(arr, vec, index + 1, n, k, sum);
	vec.pop_back();
	sum -= arr[index];
	printF(arr, vec, index + 1, n, k, sum);
}

// print subsequce whose sum is k than print only first subset array
bool printF_first(int arr[], vector<int> &vec, int index, int n, int k, int sum)
{
	if (index == n)
	{
		if (sum == k)
		{
			for (auto it : vec)
				cout << it << " ";
			cout << nl;
			return true;
		}
		else
			return false;
	}

	vec.push_back(arr[index]);
	sum += arr[index];
	if (printF_first(arr, vec, index + 1, n, k, sum) == true)
		return true;
	vec.pop_back();
	sum -= arr[index];
	if (printF_first(arr, vec, index + 1, n, k, sum) == true)
		return true;
	return false;
}

// count the total number of subsequnce whose sum is k
int count_subset(int arr[], int index, int n, int k, int sum)
{
	if (index == n)
	{
		if (sum == k)
		{
			return 1;
		}
		return 0;
	}

	int l = count_subset(arr, index + 1, n, k, sum + arr[index]);
	int r = count_subset(arr, index + 1, n, k, sum);

	return l + r;
}

// find total numebr of path condition move right down
int grid_path(int n, int m)
{
	if (n == 1 || m == 1)
		return 1;
	return grid_path(n, m - 1) + grid_path(n - 1, m);
}

int count_partision(int n, int m)
{
	if (n == 0)
		return 1;
	else if (m == 0 || n < 0)
		return 0;
	else
		count_partision(n - m, m) + count_partision(n, m - 1);
}

// find the combination that sum is same as target value
void combi_target_value(int arr[], int n, int index, int target, vector<int> &vec, set<vector<int>> &st)
{
	if (index == n)
	{
		if (target == 0)
		{
			for (auto it : vec)
				cout << it << " ";
			cout << nl;
			// st.insert(vec);
		}
		return;
	}

	if (arr[index] <= target)
	{

		vec.push_back(arr[index]);
		combi_target_value(arr, n, index, target - arr[index], vec, st);
		vec.pop_back();
	}
	combi_target_value(arr, n, index + 1, target, vec, st);
}

// find the combination that sum is same as target value and but in sorted order and dupliate cannot repet

void combi_target_value_duplicate_not_repat(int arr[], int n, int index, int target, vector<int> &vec, set<vector<int>> &st)
{
	if (index == n)
	{
		if (target == 0)
		{
			st.insert(vec);
		}
		return;
	}

	if (arr[index] <= target)
	{
		vec.push_back(arr[index]);
		combi_target_value_duplicate_not_repat(arr, n, index + 1, target - arr[index], vec, st);
		vec.pop_back();
	}

	combi_target_value_duplicate_not_repat(arr, n, index + 1, target, vec, st);
}
////////////////////////////////////////////////
void combi_target_value_duplicate_not_repat1(int index, int target, vector<int> &arr, vector<vector<int>> &ans, vector<int> &ds)
{
	if (target == 0)
	{
		ans.push_back(ds);
		return;
	}

	for (int i = index; i < arr.size(); i++)
	{

		if (i > index && arr[i] == arr[i - 1])
			continue;
		// cout << " new " <<	" i " << i << " index " << index << " arr[i] " << arr[i] << " arr[i - 1] " << arr[ i - 1 ] << nl;

		if (arr[i] > target)
			break;
		ds.push_back(arr[i]);
		combi_target_value_duplicate_not_repat1(i + 1, target - arr[i], arr, ans, ds);
		ds.pop_back();
	}
}

void solve()
{
	// combi_target_value_duplicate_not_repat1
	vector<int> arr = {1, 1, 1, 2, 2};
	vector<vector<int>> ans;
	vector<int> ds;
	combi_target_value_duplicate_not_repat1(0, 4, arr, ans, ds);
	for (auto it : ans)
	{
		for (auto it1 : it)
			cout << it1 << " ";
		cout << nl;
	}
}
/////////////////////////////////////////////////////////////

// subset sum in the increasing order
void subset_sum(vector<int> &ans, vector<int> arr, int index, int sum)
{
	if (index == arr.size())
	{
		ans.push_back(sum);
		return;
	}

	// 1st way to write

	// sum += arr[index];
	// subset_sum(ans , arr, index + 1, sum);
	// sum -= arr[index];
	// subset_sum(ans , arr, index + 1, sum);

	// 2nd way to write
	subset_sum(ans, arr, index + 1, sum + arr[index]);
	subset_sum(ans, arr, index + 1, sum);
}

void solve_subset_sum()
{
	vector<int> arr = {2, 3};
	vector<int> ans;
	subset_sum(ans, arr, 0, 0);
	sort(ans.begin(), ans.end());
	for (auto it : ans)
		cout << it << " ";
}

// subset_sum in any order
void subset_sum_anyorder(vector<int> &ans, vector<int> &arr, int index, int sum)
{
	if (index == arr.size())
	{
		ans.push_back(sum);
		return;
	}

	subset_sum_anyorder(ans, arr, index, sum + arr[index]);
	subset_sum_anyorder(ans, arr, index + 1, sum);
}

void solve_subset_sum_any_order()
{
	vector<int> arr = {2, 3};
	vector<int> ans;
	subset_sum(ans, arr, 0, 0);
	sort(ans.begin(), ans.end());
	for (auto it : ans)
		cout << it << " ";
}

// //////////////////////////////////////////////////
// generate subset  (without duplcaite)
void subset_no_duplicate(vector<int> nums, vector<int> &ds, vector<vector<int>> &ans, int index)
{
	if (index == nums.size())
	{
		ans.push_back(ds);
		return;
	}

	ds.push_back(nums[index]);
	subset_no_duplicate(nums, ds, ans, index + 1);
	ds.pop_back();
	subset_no_duplicate(nums, ds, ans, index + 1);
}

void solve_per()
{
	vector<int> nums = {1, 2, 2};
	vector<int> ds;
	vector<vector<int>> ans;
	int index = 0;
	subset_no_duplicate(nums, ds, ans, index);
	set<vector<int>> st;
	for (auto it : ans)
	{
		st.insert(it);
		// for(auto it1 : it ) cout << it1 << " ";
		// cout << nl;
	}

	for (auto it : st)
	{
		for (auto it1 : it)
			cout << it1 << " ";
		cout << nl;
	}
}

// 2nd way to generate subset without duplicate
void find_subset(int index, vector<int> nums, vector<int> &ds, vector<vector<int>> &ans)
{
	// if (index == nums.size()) {
	ans.push_back(ds);
	// return;
	// }
	for (int i = index; i < nums.size(); i++)
	{
		if (i != index && nums[i] == nums[i - 1])
			continue;
		ds.push_back(nums[i]);
		find_subset(i + 1, nums, ds, ans);
		ds.pop_back();
	}
}

void solve_find_subset()
{
	vector<int> nums = {1, 2, 2};
	sort(nums.begin(), nums.end());
	vector<vector<int>> ans;
	vector<int> ds;
	find_subset(0, nums, ds, ans);
	for (auto it : ans)
	{
		for (auto it1 : it)
			cout << it1 << " ";
		cout << nl;
	}
}

/////////////////////////////////////////////////////////////////////
// print all the combination of string/ array;
void printCombination(int freq[], vector<vector<int>> &ans, vector<int> &ds, vector<int> &nums)
{
	if (ds.size() == nums.size())
	{
		ans.push_back(ds);
		return;
	}
	for (int i = 0; i < nums.size(); i++)
	{
		if (!freq[i])
		{
			ds.push_back(nums[i]);
			freq[i] = 1;
			printCombination(freq, ans, ds, nums);
			freq[i] = 0;
			ds.pop_back();
		}
	}
}

void solve_printCombination()
{
	vector<int> nums = {1, 2, 3};
	vector<vector<int>> ans;
	vector<int> ds;
	int freq[nums.size()] = {0};
	for (int i = 0; i < nums.size(); i++)
		freq[i] = 0;
	printCombination(freq, ans, ds, nums);

	for (auto it : ans)
	{
		for (auto it1 : it)
			cout << it1 << " ";
		cout << nl;
	}
}

// 2nd way print all the combination of string/ array;
void printCombination1(int index, vector<int> nums, vector<vector<int>> &ans)
{
	if (index == nums.size())
	{
		ans.push_back(nums);
		return;
	}

	for (int i = index; i < nums.size(); i++)
	{
		swap(nums[index], nums[i]);
		printCombination1(index + 1, nums, ans);
		swap(nums[index], nums[i]);
	}
}
void solve_printCombination1()
{
	vector<int> nums = {1, 2, 3};
	vector<vector<int>> ans;
	printCombination1(0, nums, ans);
	for (auto it : ans)
	{
		for (auto it1 : it)
			cout << it1 << " ";
		cout << nl;
	}
}

////////////////////////////////////////////////////////////////////////////////
// N - Queen problem

bool isSafe(int row, int n, int col, vector<vector<int>> &mat)
{
	for (int i = row, j = col; i >= 0 && j >= 0; i--, j--)
		if (mat[i][j] == 1)
			return false;
	for (int i = row, j = col; i >= 0 && j >= 0; i, j--)
		if (mat[i][j] == 1)
			return false;
	for (int i = row, j = col; i < n && j >= 0; i++, j--)
		if (mat[i][j] == 1)
			return false;
	return true;
}

void NQueen(int col, int n, vector<vector<int>> &mat)
{
	if (col == n)
	{
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
				cout << mat[i][j] << " ";

			cout << nl;
		}
		cout << nl;
		return;
	}

	for (int row = 0; row < n; row++)
	{
		if (isSafe(row, n, col, mat))
		{
			mat[row][col] = 1;
			NQueen(col + 1, n, mat);
			mat[row][col] = 0;
		}
	}
}

void solve_NQueen()
{
	int n = 4;
	vector<vector<int>> mat(n, vector<int>(n, 0));
	NQueen(0, n, mat);
}

// 2nd way to solve N queen problem using more optimal way
// ////////////////////////////////////////////////////
bool is_ok(int col, int row, int n, vector<vector<int>> &mat, vector<int> &firstHash, vector<int> &rowHash, vector<int> &secondHash)
{
	if (firstHash[row + col] == 1 || rowHash[row] == 1 || secondHash[n - 1 + col - row] == 1)
		return false;
	return true;
}
void NQueen_optimal(int col, int n, vector<vector<int>> &mat, vector<int> &firstHash, vector<int> &rowHash, vector<int> &secondHash)
{
	if (col == n)
	{
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
				cout << mat[i][j] << " ";
			cout << nl;
		}
		cout << nl;
		return;
	}

	for (int row = 0; row < n; row++)
	{
		if (is_ok(col, row, n, mat, firstHash, rowHash, secondHash))
		{

			mat[row][col] = 1;
			firstHash[row + col] = 1;
			rowHash[row] = 1;
			secondHash[n - 1 + col - row] = 1;

			NQueen_optimal(col + 1, n, mat, firstHash, rowHash, secondHash);

			mat[row][col] = 0;
			firstHash[row + col] = 0;
			rowHash[row] = 0;
			secondHash[n - 1 + col - row] = 0;
		}
	}
}

void solve_nqueen_optimal()
{
	int n = 4;
	vector<vector<int>> mat(n, vector<int>(n, 0));
	vector<int> firstHash(2 * n - 1, 0);
	vector<int> rowHash(n, 0);
	vector<int> secondHash(2 * n - 1, 0);
	NQueen_optimal(0, n, mat, firstHash, rowHash, secondHash);
}

////////////////////////////////////////////////////////////////////////////////////
// sudoku solver
bool isValid(vector<vector<int>> &board, int row, int col, int k)
{
	for (int i = 0; i < 9; i++)
	{
		if (board[i][col] == k)
			return false;
		if (board[row][i] == k)
			return false;
		if (board[3 * (row / 3) + i / 3][3 * (col / 3) + i % 3] == k)
			return false;
	}
	return true;
}
bool solve(vector<vector<int>> &board)
{
	for (int i = 0; i < board.size(); i++)
	{
		for (int j = 0; j < board[0].size(); j++)
		{
			if (board[i][j] == 0)
			{
				for (int k = 1; k <= 9; k++)
				{
					if (isValid(board, i, j, k) == true)
					{
						board[i][j] = k;
						if (solve(board) == true)
							return true;
						else
							board[i][j] = 0;
					}
				}
				return false;
			}
		}
	}
	return true;
}
void solveSudoku(vector<vector<int>> &board)
{
	solve(board);
}
void solve_sudoku()
{
	vector<vector<int>> board = {
		{5, 3, 0, 0, 7, 0, 0, 0, 0},
		{6, 0, 0, 1, 9, 5, 0, 0, 0},
		{0, 9, 8, 0, 0, 0, 0, 6, 0},
		{8, 0, 0, 0, 6, 0, 0, 0, 3},
		{4, 0, 0, 8, 0, 3, 0, 0, 1},
		{7, 0, 0, 0, 2, 0, 0, 0, 6},
		{0, 6, 0, 0, 0, 0, 2, 8, 0},
		{0, 0, 0, 4, 1, 9, 0, 0, 5},
		{0, 0, 0, 0, 8, 0, 0, 7, 9}};
	solveSudoku(board);
	for (int i = 0; i < board.size(); i++)
	{
		for (int j = 0; j < board[0].size(); j++)
			cout << board[i][j] << " ";
		cout << nl;
	}
}

// //////////////////////////////////////////////
// palindrome partision
bool isPalidrome(string s, int start, int end)
{
	while (start >= end)
	{
		if (s[start++] != s[end--])
			return false;
	}
	return true;
}
void func(int index, string s, vector<string> &path, vector<vector<string>> &res)
{
	if (index == s.size())
	{
		res.push_back(path);
		return;
	}

	for (int i = index; i < s.size(); i++)
	{
		if (isPalidrome(s, index, i))
		{
			path.push_back(s.substr(index, i - index + 1));
			func(i + 1, s, path, res);
			path.pop_back();
		}
	}
}
vector<vector<string>> partition(string s)
{
	vector<vector<string>> res;
	vector<string> path;
	func(0, s, path, res);
	return res;
}

//////////////////////////////////////////////////////////////////

// Rate in a Maze
void rate_in_maze(int i, int j, vector<vector<int>> &a, int n, vector<string> &ans, string move, vector<vector<int>> &vis)
{
	if (i == n - 1 && j == n - 1)
	{
		ans.push_back(move);
		return;
	}

	//  down
	if (i + 1 < n && !vis[i + 1][j] && a[i + 1][j] == 1)
	{
		vis[i][j] = 1;
		rate_in_maze(i + 1, j, a, n, ans, move + 'D', vis);
		vis[i][j] = 0;
	}

	// left

	if (j - 1 >= 0 && !vis[i][j - 1] && a[i][j - 1] == 1)
	{
		vis[i][j] = 1;
		rate_in_maze(i, j - 1, a, n, ans, move + 'L', vis);
		vis[i][j] = 0;
	}

	// right
	if (j + 1 < n && !vis[i][j + 1] && a[i][j + 1] == 1)
	{
		vis[i][j] = 1;
		rate_in_maze(i, j + 1, a, n, ans, move + 'R', vis);
		vis[i][j] = 0;
	}

	// UP
	if (i - 1 >= 0 && !vis[i - 1][j] && a[i - 1][j] == 1)
	{
		vis[i][j] = 1;
		rate_in_maze(i - 1, j, a, n, ans, move + 'U', vis);
		vis[i][j] = 0;
	}
}

void solve_rate_in_maze()
{
	vector<vector<int>> a = {
		{1, 0, 0, 0},
		{1, 1, 0, 0},
		{1, 1, 0, 0},
		{0, 1, 1, 1}};

	vector<string> ans;
	vector<vector<int>> vis(a.size(), vector<int>(a[0].size(), 0));
	if (a[0][0] == 1)
		rate_in_maze(0, 0, a, a.size(), ans, "", vis);
	for (int i = 0; i < ans.size(); i++)
		cout << ans[i] << nl;
}

// 2nd optimize way to write rate_in_maze

void rate_in_maze_optimize(int i, int j, vector<vector<int>> &a, int n, vector<string> &ans, string move, vector<vector<int>> &vis, int di[], int dj[])
{
	if (i == n - 1 && j == n - 1)
	{
		ans.push_back(move);
		return;
	}

	string dir = "DLRU";
	for (int ind = 0; ind < 4; ind++)
	{
		int nexti = i + di[ind];
		int nextj = j + dj[ind];
		if (nexti >= 0 && nexti < n && nextj >= 0 && nextj < n && !vis[nexti][nextj] && a[nexti][nextj] == 1)
		{
			vis[i][j] = 1;
			rate_in_maze_optimize(nexti, nextj, a, n, ans, move + dir[ind], vis, di, dj);
			vis[i][j] = 0;
		}
	}
}
void solve_rate_in_maze_optimize()
{

	vector<vector<int>> a = {
		{1, 0, 0, 0},
		{1, 1, 0, 0},
		{1, 1, 0, 0},
		{0, 1, 1, 1}};

	vector<string> ans;
	int di[] = {+1, 0, 0, -1};
	int dj[] = {0, -1, 1, 0};
	int n = a.size();
	vector<vector<int>> vis(n, vector<int>(n, 0));
	if (a[0][0] == 1)
		rate_in_maze_optimize(0, 0, a, n, ans, "", vis, di, dj);
	for (int i = 0; i < ans.size(); i++)
		cout << ans[i] << nl;
}

//////////////////////////////////////////////////////////////
// get kth permutation 
string getPermutation(int n , int k) {
	int fact = 1;
	vector<int> number ;
	for(int i = 1 ; i<n; i++) {
		fact *= i;
		number.push_back(i);
	}
	number.push_back(n);
	string ans = "";
	k -= 1;
	while(true) {
		ans = ans + to_string(number[k / fact]);
		number.erase(number.begin() + k / fact);
		if(number.size() == 0) break;
		k %= fact;
		fact = fact / number.size();
	}
	return ans;
} 



void solve_get_permutation() {
	int n = 4; 
	int k = 17;
	cout << k << "th permutation is = " <<  getPermutation(n , k);
}
int main()
{

	// int n = 16;
	// cout << power_of_2(n);

	// binary
	// int n = 6;
	// deci_to_binary(n);

	// print N to 1
	// int n = 5;
	// print_n_1(n);

	// print 1 to n
	// int n = 5;
	// print_1_n(n);

	// simple and tail recursive function
	// int n = 5;
	// cout << fact_simp(n);
	// cout << fact_tail(n , 1);

	// find sum of n natural number
	// int n = 5;
	// cout << sum(5);

	// string is palindrome
	// string s = "mukum";
	// if(palindrome(s, s.length() - 1,0)) cout << "palindrome";
	// else cout << " not palindrome";
	// if(palindrome_1(s,0,s.length() - 1)) cout << "palindrome";
	// else cout << " not palindrome";

	//  sum of all digits
	// int n = 123;
	// cout << sum_of_all_digits(n, 0);
	// cout << sum_of_all_digits1(n);

	// cutting rope than get maximum number of cut
	// int n = 23, a = 11, b = 9, c = 12;
	// cout << cutting_rop(n, a, b, c);

	// Tower of honai
	// int s = 1, d = 3 , h = 2;
	// tower( 'A', 'C', 'B', 3);
	//    sou   des    hel

	// joseph problem
	// int n = 7, k = 3;
	// int ans = -1;
	// vector<int> vec;
	// for (int i = 0; i < n; i++) vec.push_back(i);
	// k--;
	// josep(vec , k , 0, ans);
	// cout << ans;

	// if 1 subset has sum == given sum than print that subset
	// int arr[] = {2, 3, -8, 7, -1, 2, 3};

	// int n = sizeof(arr) / sizeof(arr[0]);
	// vector<int> vec;
	// int cnt = 0;
	//  int key = 8; // or sum of subset equal to this than count
	// sum_of_subset_is(0, n , vec, arr, 0, cnt,key);
	// cout << cnt;

	// permutation of array element
	// vector<int> nums = {1, 2, 3};
	// vector<vector<int>> ans;
	// vector<int> ds ;
	// int freq[nums.size()] = {0};

	// for (int i = 0; i < nums.size(); i++) freq[i] = 0;
	// permutation_of_array(ds, nums , ans , freq);

	// for(auto it : ans) {
	// 	for(auto it1 : it) cout << it1 << " ";
	// 	cout << endl;
	// }

	// permutation of string
	// string str = "abc";
	// string ds;
	// int freq[str.length()] = {0};
	// for (int i = 0; i < str.length(); i++) freq[i] = 0;
	// permutation_of_string(ds, str, freq);

	// print 1 to n;
	// int n = 10;
	// print(n);

	// sum of all the digits
	// int n = 64;
	// cout << sumOfDigit(n);

	// count the total digit in the number
	// int n = 0;
	// cout << digit_count(n);

	// sum of digital root
	// int n = 27640;
	// cout << sum_digital_root(n);

	// fibonaci number
	// int n = 0;
	// cout << fibonaci(n);

	// tower honai
	// int N = 3;
	// cout << toh(N, 1, 3, 2);

	// josephus problme
	// int n = 7, k = 3;
	// cout << josephus(n , k) << "\n";

	//  lucky numbers
	// int n = 5, counter = 2;
	// if (lucky_numbers(n , counter)) cout << "lucky numbers";
	// else cout << " not lucky number";

	// lucky numbers 1
	// int n = 5;
	// if(lucky_numbers1(n)) cout << " lucky number";
	// else cout << " not lucky number";

	// power of number
	// int x = 361 , n = 163;
	// cout << pow_func(x , n);

	// using powerset print subset or sequnce of string
	// string s = "abc";
	// string res;
	// vector<string> bowl;
	// string temp = "";
	// vector<string> ans =  powerSet(0, s, temp);
	// for (auto it : ans) cout << it << "\n";

	// lettercombination in the phone keypad
	// string digits = "234";
	// vector<string> ans;
	// ans = letter_combination(digits);
	// for (auto it : ans) cout << it << "\n";

	// reverse array
	// vector<int> arr = { 1,2, 3, 4, 5};
	// vector<int> vec = reverse_array(arr, 0);
	// for(auto &it : vec) cout << it << " ";

	// string is palidrome
	// string str = "mukkum";
	// if(palindrome_out(str, 0)){
	// 	cout << " yes string is palidrome " << "\n";
	// } else cout << " NO string is not  palidrome " << "\n";

	// fibonaci number
	// int n = 6;
	// cout << fibo(n);

	// print subset of array

	// int arr[] = { 1, 3, 2};
	// int n = sizeof(arr) / sizeof(arr[0]);
	// int index = 0;
	// vector<int> vec ;
	// print_subset(arr, n , vec , index);

	// using powerset
	// int arr[] = {1, 2, 3};
	// int n = sizeof(arr) / sizeof(arr[0]);

	// for(int i = 0; i<(1 << n); i++) {
	// 	for(int bit = 0; bit < n; bit++) {
	// 		if((i >>  bit) & 1 ) cout << arr[bit] << " ";
	// 	}
	// 	cout << nl;
	// }

	// print subsequnce whose sum is K
	// int k = 3;
	// int arr[] = { 1, 2, 3};
	// int n = sizeof(arr) / sizeof(arr[0]);
	// int index = 0;
	// vector<int> vec;
	// printF(arr, vec , index, n, k, 0);

	// print only one subset whose sum is k ;
	// int k = 3;
	// int arr[] = { 1, 2, 3};
	// int n = sizeof(arr) / sizeof(arr[0]);
	// int index = 0;
	// vector<int> vec;
	// printF_first(arr, vec , index, n, k, 0);

	// count total numbers of subset whose sum is k;
	// int k = 3;
	// int arr[] = {1, 2, 3};
	// int n = sizeof(arr) / sizeof(arr[0]);
	// int index = 0;
	// cout << count_subset(arr, index, n , k , 0);

	// find grid path's
	// int n = 3, m = 3;
	// cout << grid_path(n , m);

	// count partision of n up to m
	// int n = 9, m = 5;
	// cout << count_partision(n , m);

	// when cmbination of array element is equal to target value than print that combination
	// int arr[] = {10, 1, 2, 7, 6, 1, 5};

	/*	int arr[] = {1, 1, 1,  2, 2};

		int n = sizeof(arr) / sizeof(arr[0]);
		sort(arr, arr + n);
		int target = 4;
		set<vector<int>> st;
		vector<int> vec;
		// combi_target_value(arr, n , 0 , target, vec, st);
		combi_target_value_duplicate_not_repat(arr, n , 0 , target, vec, st);

		for (auto s : st) {
			for (auto it : s) cout << it << " ";
			cout << nl;
		}*/

	// combi_target_value_duplicate_not_repat1
	// solve();

	// subset_sum in the increasing order
	// solve_subset_sum();

	// find subset but not duplicate repeat
	// solve_per();
	// solve_find_subset();

	// print permutation of array or string
	// solve_printCombination();
	// solve_printCombination1();
	// solve_NQueen();
	// solve_nqueen_optimal(); // optimal way to solve this problem

	//  solve sudoku
	// solve_sudoku();

	// palindrome partition
	// string = "" partition()

	// solve rate in maze();
	// solve_rate_in_maze();

	// solve rate in maze short version of code using looping
	// solve_rate_in_maze_optimize();


	// get kth permutation
	// solve_get_permutation();
}


/*
DDRDRR
DDRUDDRR
DRDDRR
*/