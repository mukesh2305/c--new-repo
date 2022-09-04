#include <bits/stdc++.h>
using namespace std;

void rev_arr(int *arr, int n, int i)
{
	if (i > n / 2)
		return;
	swap(arr[i], arr[n - i - 1]);
	i++;
	rev_arr(arr, n, i);
}

int binary_search(int arr[], int low, int high, int key)
{
	if (low > high)

		return -1;
	int mid = (low + high) / 2;
	if (arr[mid] == key)
		return mid;
	else if (arr[mid] > key)
		return binary_search(arr, low, mid - 1, key);
	else
		return binary_search(arr, mid + 1, high, key);
}

bool is_palindrome_rec(string str, int low, int high)
{
	if (low > high)
		return true;
	if (str[low] != str[high])
		return false;
	return is_palindrome_rec(str, low + 1, high - 1);
}

// first way to print sum of subsquence devisible by 3
int key = 3;
void subSquence_sum_is_devide_by_key(int i, vector<int> &v, int arr[], int n)
{	// Time Complexity: 0(2^n * n)
	// Space Complexity: 0(n)
	if (i == n)
	{
		if (v.size() != 0)
		{	// this will make sure that empty sub-set is not consider

			int sum = 0;
			for (auto it : v)
			{
				sum += it;
			}
			if (sum % 3 == 0)
			{
				for (auto it : v)
					cout << it << " ";
				cout << endl;
			}
		}
		return;
	}
	v.push_back(arr[i]);
	subSquence_sum_is_devide_by_key(i + 1, v, arr, n);
	v.pop_back();
	subSquence_sum_is_devide_by_key(i + 1, v, arr, n);
}

// second way to print sum of subsquence devisible by 3
int key1 = 3;
void subSquence_sum_is_devide_by_key1(int i, int sum, vector<int> &v, int arr[], int n)
{	// Time Complexity: 0(2^n * n)
	// Space Complexity: 0(n)
	if (i == n)
	{
		if (v.size() != 0 && sum % key1 == 0)
		{

			for (auto it : v)
				cout << it << " ";
			cout << endl;
		}

		return;
	}
	v.push_back(arr[i]);
	sum += arr[i];
	subSquence_sum_is_devide_by_key1(i + 1, sum, v, arr, n);
	v.pop_back();
	sum -= arr[i];
	subSquence_sum_is_devide_by_key1(i + 1, sum, v, arr, n);
}

int key2 = 3;
bool subSquence_sum_is_devide_by_key2(int i, int sum, vector<int> &v, int arr[], int n)
{	// Time Complexity: 0(2^n * n)
	// Space Complexity: 0(n)
	if (i == n)
	{
		if (v.size() != 0 && sum % key2 == 0 && v.size() == 1)
		{
			return true;
		}
		return false;
	}
	v.push_back(arr[i]);
	sum += arr[i];
	if (subSquence_sum_is_devide_by_key2(i + 1, sum, v, arr, n))
	{
		return true;
	}
	v.pop_back();
	sum -= arr[i];
	if (subSquence_sum_is_devide_by_key2(i + 1, sum, v, arr, n))
	{
		return true;
	}
}

void subSquence(int i, vector<int> &v, int arr[], int n)
{	// Time Complexity: 0(2^n * n)
	// Space Complexity: 0(n)
	if (i == n)
	{

		for (auto it : v)
			cout << it << " ";
		cout << endl;

		return;
	}
	v.push_back(arr[i]);
	// cout << v[i] << " this " << endl;
	subSquence(i + 1, v, arr, n);
	v.pop_back();
	subSquence(i + 1, v, arr, n);
}

int subSquence_sum_count(int i, int sum, int arr[], int n, int key)
{
	if (i == n)
	{
		if (sum % key == 0)
			return 1;
		else
			return 0;
	}
	sum += arr[i];
	int l = subSquence_sum_count(i + 1, sum, arr, n, key);
	sum -= arr[i];
	int r = subSquence_sum_count(i + 1, sum, arr, n, key);
	return l + r;
}

int subArray_with_given_sum_using_of_array_element(int arr[], int i, int n, int sum)
{
	// if(sum == 0) return 1;
	if (i == n)
	{
		if (sum == 0)
			return 1;
		else
			return 0;
	}
	int l = 0, r = 0;

	// when can you pick particular index
	if (arr[i] <= sum)
	{
		// sum will decrease
		sum -= arr[i];
		l = subArray_with_given_sum_using_of_array_element(arr, i, n, sum);
		// restore sum
		sum += arr[i];
	}

	// not pick means move to the next index
	r = subArray_with_given_sum_using_of_array_element(arr, i + 1, n, sum);
	return l + r;
}

void find_path_in_matrix(int arr[][2], int i, int j, int n, int m, string path)
{

	if (i >= n || j >= m)
		return;
	if (i == n - 1 && j == m - 1)
	{
		// cout << path << endl;
		return;
	}
	// if (i < n)
	// {
	path += "D";
	find_path_in_matrix(arr, i + 1, j, n, m, path);
	// cout << path << " D " << endl;
	path.pop_back();
	// cout << path << " D1 " << endl;

	// }
	// if (j < m)
	// {
	path += "R";
	find_path_in_matrix(arr, i, j + 1, n, m, path);
	// cout << path << " R " << endl;
	path.pop_back();
	// cout << path << " R1 " << endl;

	// }
}

void find_path_in_matrix1(int arr[][2], int i, int j, int n, int m, string path)
{

	if (i == n - 1 && j == m - 1)
	{
		cout << path << endl;
		return;
	}
	if (i < n)
	{
		path += "D";
		find_path_in_matrix1(arr, i + 1, j, n, m, path);
		path.pop_back();
	}
	if (j < m)
	{
		path += "R";
		find_path_in_matrix1(arr, i, j + 1, n, m, path);
		path.pop_back();
	}
}

// find_path_in_matrix_four_direction using visited or not visited
int n = 3, m = 2;
void find_path_in_matrix_four_direction(int i, int j, string s, vector<vector<int>> &vis)
{
	if (i >= n || j >= m || i < 0 || j < 0 || vis[i][j] == 1)
		return;
	if (i == n - 1 && j == m - 1)
	{
		cout << s << endl;
		return;
	}

	vis[i][j] = 1;
	s += "D";
	find_path_in_matrix_four_direction(i + 1, j, s, vis);
	s.pop_back();

	s += "R";
	find_path_in_matrix_four_direction(i, j + 1, s, vis);
	s.pop_back();

	s += "U";
	find_path_in_matrix_four_direction(i - 1, j, s, vis);
	s.pop_back();

	s += "L";
	find_path_in_matrix_four_direction(i, j - 1, s, vis);
	s.pop_back();

	vis[i][j] = 0;
}

// optimized find_path_in_matrix_four_direction using visited or not visited using for loop
string dir = "DRUL"; // if we want lexigraphycal order than arrange dir in sorted order
int di[] = {1, 0, -1, 0};
int dj[] = {0, 1, 0, -1};

void find_path_in_matrix_four_direction1(int i, int j, string s, vector<vector<int>> &vis)
{
	if (i >= n || j >= m || i < 0 || j < 0 || vis[i][j] == 1)
		return;
	if (i == n - 1 && j == m - 1)
	{
		cout << s << endl;
		return;
	}

	vis[i][j] = 1;
	for (int k = 0; k < 4; k++)
	{
		s += dir[k];
		find_path_in_matrix_four_direction1(i + di[k], j + dj[k], s, vis);
		s.pop_back();
	}
	vis[i][j] = 0;
}

// int find_path_0_1_matrix(int i, int j,  vector<vector<int>> &vis)
// {
// 	if (i >= n || j >= m || i < 0 || j < 0 || vis[i][j] == 1 || a[i][j] = 0)
// 		return 0;
// 	if (i == n - 1 && j == m - 1)
// 	{
// 		// cout << s << endl;
// 		return 1;
// 	}

// 	vis[i][j] = 1;
// 	int cnt = 0;
// 	for (int k = 0; k < 4; k++)
// 	{
// 		cnt += find_path_in_matrix_four_direction1(i + di[k], j + dj[k], vis);
// 	}
// 	vis[i][j] = 0;
// 	return cnt;
// }

// NQueen function
// int n;
bool isSafe(int row, int col, vector<vector<int>> &mat)
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
bool NQueen(int col, vector<vector<int>> &mat)
{
	if (col == n)
	{
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				cout << mat[i][j] << " ";
			}
			cout << endl;
		}
		return true;
	}

	for (int row = 0; row < n; row++)
	{
		if (isSafe(row, col, mat))
		{
			mat[row][col] = 1;
			if (NQueen(col + 1, mat) == true)
				return true;
			mat[row][col] = 0;
		}
	}
	return false;
}

void solve()
{
	cin >> n;
	vector<vector<int>> mat(n, vector<int>(n, 0));
	NQueen(0, mat);
}

bool isSafe1(int row, int col, vector<vector<int>> &mat, vector<int> &rowHash, vector<int> &thirdHash, vector<int> &firstHash)
{
	// this is a 0(1) operations
	if (rowHash[row] == 1 || thirdHash[row + col] == 1 || firstHash[n - 1 + row - col] == 1)
		return false;

	return true;
}

bool Nqueen1(int col, vector<vector<int>> &mat, vector<int> &rowHash, vector<int> &thirdHash, vector<int> firstHash)
{
	if (col == n)
	{
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				cout << mat[i][j] << " ";
			}
			cout << endl;
		}
		return true;
	}

	for (int row = 0; row < n; row++)
	{
		// if (rowHash[row] == 0 && firstHash[col + row] == 0 && thirdHash[col - row + n - 1] == 0)
		// {
		if (isSafe1(row, col, mat, rowHash, thirdHash, firstHash) == true)
		{
			mat[row][col] = 1;
			rowHash[row] = 1;
			firstHash[col + row] = 1;
			thirdHash[n - 1 + row - col] = 1;
			if (Nqueen1(col + 1, mat, rowHash, thirdHash, firstHash) == true)
				return true;

			// if we want to print all the possible solutions for NQueen then remove the below if condition
			// and just write this line
			//  Nqueen1(col + 1, mat, rowHash, thirdHash, firstHash);
			//  and bool return become void return
			mat[row][col] = 0;
			rowHash[row] = 0;
			firstHash[col + row] = 0;
			thirdHash[col - row + n - 1] = 0;
		}
	}

	return false;
}
// void solve1()
// {
// 	cin >> n;
// 	vector<vector<int>> vis(n, vector<int>(n, 0));
// 	vector<int> rowHash(n, 0);
// 	vector<int> thirdHash(2 * n - 1, 0);
// 	vector<int> firstHash(2 * n - 1, 0);
// 	NQueen1(0, mat, rowHash, thirdHash, firstHash);
// }

int main()
{
	// int arr[] = {1, 4, 3, 2, 5}; // reverse array
	// int n = sizeof(arr) / sizeof(arr[0]);
	// rev_arr(arr, n, 0);

	// for (auto it : arr)
	// 	cout << it << " ";

	// string is palindrome or not --------------------------------------------------
	// string str = "mukum"; // is palindrome or not using recursion
	// int n = str.length();
	// bool is_palindrome = is_palindrome_rec(str, 0, n - 1);
	// cout << is_palindrome << endl;

	// write a recursive function for binary search -----------------------------------
	// int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	// int n = sizeof(arr) / sizeof(arr[0]);
	// int key = 5;
	// int result = binary_search(arr, 0, n - 1, key);
	// cout << result << endl;

	// using first way print  subarray of given array where sum is devided by key -------------------------------------------------
	// int arr[] = {1, 3, 2};
	// int n = sizeof(arr) / sizeof(arr[0]);
	// vector<int> v;
	// int sum = 0;
	// subSquence_sum_is_devide_by_key(0,sum, v, arr, n);

	// using second way  print subarray of given array where sum is devided by key -------------------------------------------------
	// int arr[] = {1, 3, 2};
	// int n = sizeof(arr) / sizeof(arr[0]);
	// vector<int> v;
	// int sum = 0;
	//  subSquence_sum_is_devide_by_key1(0,sum, v, arr, n);

	// second problem
	// using second way  print subarray of given array where sum is devided by key -------------------------------------------------
	// int arr[] = {1, 3, 2, 6};
	// int n = sizeof(arr) / sizeof(arr[0]);
	// vector<int> v;
	// int sum = 0;
	// if (subSquence_sum_is_devide_by_key2(0, sum, v, arr, n))
	// {
	// 	cout << v[0];
	// }

	// // print  subarray of given array -------------------------------------------------
	int arr[] = {1, 3, 2};
	int n = sizeof(arr) / sizeof(arr[0]);
	vector<int> v;
	subSquence(0, v, arr, n);
	// return 0;

	// count of sum divicible by 3 of subarray

	// 	// count of sum divicible by 3 of subarray
	// int arr[] = {1, 3, 2};
	// int n = sizeof(arr) / sizeof(arr[0]);
	// int sum = 0;
	// int key = 3;
	// int count = subSquence_sum_count(0, sum, arr, n, key);
	// cout << count - 1 << endl; // remove empty subsequence that's why -1

	// find subarray with given sum -------------------------------------------------
	// int arr[] = {1, 3};
	// int n = sizeof(arr) / sizeof(arr[0]);
	// int sum = 3;
	// int result = subArray_with_given_sum_using_of_array_element(arr, 0,n, sum);
	// cout << result << endl;

	// find path in the matrix 3*2 -------------------------------------------------
	// int arr[][2] = {{1, 0}, {1, 1}, {0, 1}};
	// int n = sizeof(arr) / sizeof(arr[0]);
	// int m = sizeof(arr[0]) / sizeof(arr[0][0]);
	// find_path_in_matrix(arr, 0, 0, n, m, "");
	// find_path_in_matrix1(arr, 0, 0, n, m, "");

	// output:
	// RDD
	// DRD
	// DDR

	// find path 4 directions 3 * 2 -------------------------------------------------
	//  direction are D,R,U,L
	// int n = 3, m = 2;
	// vector<vector<int>> vec(n, vector<int>(m));
	// using 4 directions find path in the matrix 3*2
	// find_path_in_matrix_four_direction(0, 0, "", vec);
	// find_path_in_matrix_four_direction1(0, 0, "", vec);
}
