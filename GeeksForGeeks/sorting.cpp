#include <bits/stdc++.h>
using namespace std;

void init_code() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}


#define fastio()         ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define MOD              1000000007
#define MOD1             998244353
#define INF              1e18
#define nl               "\n"
#define nline            cout << "\n"
#define pb               push_back
#define ppb              pop_back
#define setbits(x)       __builtin_popcountll(x);
#define zerobits(x)      __builtin_ctzll(x);
#define ps(x, y)         fixed<<setprecision(y)<<x
#define mp 				 make_pair
#define ff 				 first
#define ss               second
#define PI               3.141592653589793238462
#define sz(x)           ((int)(x).size())
#define all(x)          (x).begin(), (x).end()

typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;


#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x << " " ; _print(x); cerr << "\n";
#else
#define debug(x)
#endif


#ifndef ONLINE_JUDGE
#define LA(x, n) cerr << #x << " ";_print(x, n); cerr << "\n";
#endif

void debug_code() {
#ifndef ONLINE_JUDGE
	freopen("Error.txt", "w", stderr);
#endif
}

void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(lld t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(ull t) {cerr << t;}

template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
template<class T> void _print(T arr[], int v) {cerr << "[ "; for (int i = 0; i < v; i++) {_print(arr[i]); cerr << " "; } cerr << "]";}
int gcd(int a, int b) {
	return b == 0 ? a : gcd(b, a % b);
}
ll lcm(int a, int b) {
	ll a0 = a;
	ll b0 = b;
	return a0 * b0 / __gcd(a0, b0);
}
//////////////////////////////////////////////////////////////////////////////
struct point
{
	int x, y;
};

bool my_comp(point p1, point p2)
{
	return p1.x < p2.x;
}

/////////////////////////////////////////////////////////
// TC => O(N^2)
// stable Algo
//  bubble sort Algo
void bubble_sort(int arr[], int n)
{
	// 34 15 29 8 // n = size

	// round = n - 1
	// 15 29 8 34 // 1st round = n - 1 comparision
	// 15 8 29 34  // 2st round = n - 2 comparision
	// 8 15 29 34 // 3st round = n - 3 comparision
	bool swapped;
	for (int round = 1; round < n; round++)
	{
		swapped = false;
		for (int i = 0; i < (n - round); i++)
		{
			if (arr[i] > arr[i + 1])
			{
				swap(arr[i], arr[i + 1]);
				swapped = true;
			}
		}
		if (swapped == false)
			break;
	}
}

///////////////////////////////////////////////////////////////
//  it optimize memory
// selection sort algo
//  unstable algo => because order of same element may change
int min_index(int arr[], int n, int k)
{
	int mn = INT_MAX;
	int ind = -1;
	for (int i = k; i < n; i++)
	{
		if (mn > arr[i])
		{
			mn = arr[i];
			ind = i;
		}
	}

	return ind;
}
void selection_sort(int arr[], int n)
{
	// 15 29 8 34 // comaprasion is alway n - 1
	for (int i = 0; i < (n - 1); i++)
	{
		int ind = min_index(arr, n, i);
		swap(arr[i], arr[ind]);
	}
}

///////////////////////////////////////////////////////////////
//  insertion sort // stable algo
//  TC => O(n^2)
void insertion_sort(int arr[], int n)
{
	for (int i = 1; i < n; i++)
	{
		// 34, 11, 67, 8, 19
		int temp = arr[i];
		int j = i - 1;
		while (j >= 0 && arr[j] > temp)
		{
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = temp;
	}
}

//////////////////////////////////////////////////
// merge sort() // divide and conquer approach
// merging for 2 list
int *merge_method(int A[], int m, int B[], int n)
{
	//  2 5 8 15 18
	//  5 9 12 17
	int *C = new int[m + n];
	int i = 0, j = 0, k = 0;
	while (i < m && j < n)
	{
		if (A[i] < B[j])
		{
			C[k++] = A[i++];
		}
		else
		{
			C[k++] = B[j++];
		}
	}

	// some remaning element in  the first List
	for (; i < m; i++)
		C[k++] = A[i];
	// some remaning element in the second list
	for (; j < n; j++)
		C[k++] = B[j];
	return C;
}
// merging for more than 2 list
int* merge_more_list(int A[], int m , int B[], int n, int C[], int o, int D[], int p) {
	int *one = merge_method(A, m , B, n);
	int *two = merge_method(C, o , D, p);
	int *final = merge_method(one, m + n, two, o + p);
	return final;
}

void merge(int arr[], int low, int mid, int high)
{
	int i = low, j = mid + 1, k = low;
	int B[100];
	while (i <= mid && j <= high)
	{
		if (arr[i] < arr[j])
			B[k++] = arr[i++];
		else
			B[k++] = arr[j++];
	}

	for (; i <= mid; i++)
		B[k++] = arr[i];

	for (; j <= high; j++)
		B[k++] = arr[j];

	for (int i = low; i <= high; i++)
		arr[i] = B[i];
}

// TC O(n logn); // merge sort is suitable for linked list
// merge sort can sort large size data using external merging technique
//  merge sort is stable
// require extra space => not in place sort
void merge_sort(int low, int high, int arr[])
{
	if (low < high)
	{
		int mid = (low + high) / 2;
		merge_sort(low, mid, arr);
		merge_sort(mid + 1, high, arr);
		merge(arr, low, mid, high);
	}
}


// ////////////////////////////////////
// intersection of two sorted array
// 1st approach naive approach
void intersection_array(int A[], int m, int B[], int n , set<int>& output) {
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n ; j++) {
			if (A[i] == B[j]) {
				output.insert(A[i]);
				break;
			}
		}
	}
}

// 2nd approach without using set
void intersection_array1(int A[], int m, int B[], int n ) {

	for (int i = 0; i < m; i++) {
		if (i > 0 && A[i] == A[i - 1])
			continue;
		for (int j = 0; j < n ; j++) {
			if (A[i] == B[j]) {
				cout << A[i] << " ";
				break;
			}
		}
	}
}


// 3rd approach using merge sort function merge this optimal approach
//  this is used in the sorted array
void intersection_array_merge(int A[], int m , int B[], int n) {
	// int A[] = {3, 5, 10, 10, 10, 15, 15, 20};
	// int B[] = { 5, 10, 10, 15,30};
	int i = 0, j = 0;
	while (i < m && j < n) {
		if (i > 0 && A[i] == A[i - 1]) {
			i++;
			continue;
		}

		if (A[i] < B[j]) {
			i++;
		}
		else if (A[i] > B[j]) {
			j++;
		}
		else if (A[i] == B[j] ) {
			cout << A[i] << " ";
			i++;
			j++;
		}
	}

}

// //////////////////////////////////////////
// union of two sorted array
// 1st approach => TC => O(mx) // SC O(mx);
void union_array1(int A[], int m, int B[], int n ) {
// int A[] = {3, 5, 10, 10, 10, 15, 15, 20};
// int B[] = { 5, 10, 10, 15,30};
	int mx = A[m - 1] > B[n - 1] ? A[m - 1] : B[n - 1];
	int freq[mx + 1] = {false};

	for (int i = 0; i < m; i++) {
		freq[A[i]] = true;
	}

	for (int i = 0; i < n; i++) {
		freq[B[i]] = true;
	}

	for (int i = 0; i < mx + 1; i++) {
		if (freq[i] == true) {
			cout << i << " ";
		}
	}
}

// 2nd approach
void union_array(int A[], int m, int B[], int n ) {
// int A[] = {3, 5, 10, 10, 10, 15, 15, 20};
// int B[] = { 5, 10, 10, 15,30};
	int i = 0, j = 0;
	while (i < m && j < n) {
		if (i > 0 && A[i] == A[i - 1]) {
			i++;
			continue;
		}
		if (j > 0 && B[j] == B[j - 1]) {
			j++;
			continue;
		}

		if (A[i] < B[j]) {
			cout << A[i] << " ";
			i++;
		}
		else if (A[i] > B[j]) {
			cout << B[j] << " ";
			j++;
		}
		else if (A[i] == B[j]) {
			cout << A[i] << " ";
			i++;
			j++;
		}
	}

	while (i < m) {
		if (i == 0 || A[i] != A[i - 1]) {
			cout << A[i] << " ";
			i++;
		}
	}

	while (j < n) {
		if (j == 0 || B[i] != B[j - 1]) {
			cout << B[j] << " ";
			j++;
		}
	}
}


///////////////////////////////////////////////////////
//  count of inversion in the array
// 1ST appraoch => O(N^2) TC
int inversion1(int arr[], int n) {
	int res = 0;
	for (int i = 0 ; i < n ; i++) {
		for (int j = i + 1 ; j < n ; j++) {
			if (arr[i] > arr[j]) {
				res++;
			}
		}
	}

	return res;
}

// 2nd appraoch optimal approach
// O(N) TC
int inversion(int arr[], int n) {
	// 2 4 1 3 5;
	int cnt = 0;
	int low = 0, high = n - 1;
	while (low < high) {
		if (arr[low] > arr[high]) {
			cnt++;
		}
		if (low == high - 1) {
			high--;
			low = 0;
		} else {
			low++;
		}
	}

	return cnt;
}


// 3rd approach using merge sort

int countAndMerge(int low, int mid , int high, int arr[], int temp[]) {
	int cnt = 0;
	int i = low, j = mid , k = low;
	while (i <= mid - 1 && j <= high) {
		if (arr[i] <= arr[j]) {
			temp[k++] = arr[i++];
		} else {
			temp[k++] = arr[j++];
			cnt += mid - i ;
		}
	}
	while (i <= mid - 1) {
		temp[k++] = arr[i++];
	}
	while (j <= high) {
		temp[k++] = arr[j++];
	}
	for (int i = low; i <= high; i++) {
		arr[i] = temp[i];
	}
	return cnt;
}

int inversion2(int low, int high, int arr[], int temp[]) {
	int mid, res = 0;
	if (low < high) {
		mid = low + (high - low) / 2;
		res += inversion2(low, mid , arr, temp);
		res += inversion2(mid + 1, high , arr, temp);
		res += countAndMerge(low, mid + 1, high, arr, temp);
	}
	return res;

}


/////////////////////////////////////////////////
// Quick sort (Divide and conqure algo)
//  10 16 8 12 15 6 3 9 5 in
//  pivot = 10
// partion in the quicksort

//  naive partition algorithem
//  stable algorithem // but not efficient
int naivePartiton(int l , int h, int arr[], int p) {
	// 3 8 6 12 10 7
	int temp[h - l + 1], index = 0;
	for (int i = l ; i <= h ; i++)
		if (arr[i] < arr[p]) {
			temp[index] = arr[i];
			index++;
		}

	for (int i = l ; i <= h ; i++) {
		if (arr[i] == arr[p]) {
			temp[index] = arr[i];
			index++;
		}
	}

	int res = l + index - 1; // this our response index
	for (int i = l; i <= h; i++)
		if (arr[i] > arr[p])  {
			temp[index] = arr[i];
			index++;
		}

	for (int i = l; i <= h ; i++)
		arr[i] = temp[i - l];
	return res;
}


// lometo partision
int lometoPartition(int l, int h, int arr[]) {
	int pivot = arr[h];
	int i = l - 1 ;
	// 34, 11, 67, 8, 19
	//34, 67, 11

	for (int j = l; j <= h - 1; j++) {
		if (arr[j] < pivot) {
			i++;
			swap(arr[i], arr[j]);
		}
	}
	swap(arr[i + 1], arr[h]);
	return (i + 1);
}

int partision(int l, int h, int arr[]) {
	int pivot = arr[l];
	int i = l, j = h + 1;
	while (i < j) {
		do {
			i++;
		} while (arr[i] <= pivot);
		do {
			j--;
		} while (arr[j] > pivot);
		if (i < j) {
			swap(arr[i], arr[j]);
		}
	}
	swap(arr[l], arr[j]);
	return j;
}

// Time complexity of quicksort will be
// best case TC O(nlogn) // this is not possible eveery time
// worst case TC O(n2)
// 1 . alway set middle element as pivot
// 2 . select Random element as pivot

// quick is recursive algorithem so it use Stack
//  best case => logn to worst case => n // stack size it take
void QuickSort(int arr[], int l, int h) {
	if (l < h) {
		int j = partision(l, h, arr);
		QuickSort(arr, l, j);
		QuickSort(arr, j + 1, h); // tail call in recursive call remove than it will not take extra space
	}
}

void QuickSort_Tail(int arr[], int l, int h) {
Begin:
	if (l < h) {
		int j = partision(l , h , arr);
		QuickSort(arr, l , j);
		l = j + 1;
		goto Begin;
	}
}
void lometoPartition_quickSort(int arr[], int l, int h) {
	if (l < h) {
		int j = lometoPartition(l, h, arr);
		QuickSort(arr, l, j - 1);
		QuickSort(arr, j + 1, h);
	}
}


// ///////////////////////////////////////////////
// in unsorted array findout kth smallest element in the unsorted array
// naive approach // TC O(nlogn )
int kthSmallestEle(int arr[], int n , int k) {
	sort(arr, arr + n);
	return arr[k - 1];
}

// optimal approach
int kthSmallestEle_lometoPartiton(int arr[], int n, int k) {
	int l = 0, h = n - 1;
	while (l <= h) {
		int j = lometoPartition(l, h, arr);
		// LA(arr, n); debug(j);
		if (j == k - 1) return arr[j];
		else if (j > k - 1) h = j - 1;
		else if (j < k - 1) l = j + 1;
	}
	return -1;
}

////////////////////////////////////////////////////
// minimum diffrence in the array
// TC O(n2)
int min_diff(int arr[], int n) {
	// 1, 8, 12, 5, 18
	int mn = INT_MAX;
	for (int i = 0; i < n ; i++) {
		for (int j = i + 1; j < n ; j++) {
			mn = min(mn, abs(arr[i] - arr[j]));
		}
	}
	return mn;
}

// TC O(nlogn)
int min_diff1(int arr[], int n) {
	sort(arr, arr + n);
	int mn = INT_MAX;
	for (int i = 1; i < n; i++) {
		mn = min(mn, arr[i] - arr[i - 1]);
	}
	return mn;
}

////////////////////////////////////////////////////
// chocolate problem
int chocolate_diff(int arr[], int n, int m) {
	if (m > n )  return -1;
	sort(arr, arr + n);
	int res = arr[m - 1] - arr[0];

	for (int i = 1; (i + m - 1) < n ; i++) {
		res = min(res, arr[i + m - 1] - arr[i]);
	}
	return res;
}

///////////////////////////////////////////////
//  segrigation +ve and -ve
// Sort an Array with two types of elements
// naive solution 1 :
void segregatePosNegative1(int arr[], int n) {
	int temp[n] , i = 0;
	for (int j = 0; j < n; j++) {
		if (arr[j] < 0) {
			temp[i] = arr[j];
			i++;
		}
	}

	for (int j = 0; j < n; j++) {
		if (arr[j] >= 0) {
			temp[i] = arr[j];
			i++;
		}
	}
	for (int j = 0 ; j < n ; j++) arr[j] = temp[j];
}


// -ve values on the left side and +ve values on the right side
// TC O(n)
void segregatePosNegative2(int arr[], int n) {
	int i = -1;
	for (int j = 0; j < n; j++) {
		if (arr[j] < 0) {
			i++;
			// debug(i); debug(j);
			swap(arr[i], arr[j]);
			// LA(arr, n);
		}
	}
}

// -ve values on the left side and +ve values on the right side using hoare partision
// TC O(n)
// 2 type of element
void segregatePosNegative3(int arr[], int n) {
	// int arr[] = {15,-1, 0, 2, -7 , -3, -2, 18};
	int i = -1, j = n;
	while (true) {
		do {
			i++;
			// debug(i);
			// debug(arr[i]);
		} while (arr[i] < 0);

		do {
			j--;
			// debug(j);
			// debug(arr[j]);
		} while (arr[j] >= 0);
		if (i >= j) {
			// cout << i << " " << j << endl;
			return;
		}
		swap(arr[i], arr[j]);
		// LA(arr, n);
	}
}

///////////////////////////////////////////////////////
// sort element with 3 types of elements
//  sort and array of 0 and 1 and 2
// naive solution
void sort012(int arr[], int n) {
	int i = 0, temp[n];
	for (int j = 0; j < n ; j++) {
		if (arr[j] == 0) {
			temp[i] = arr[j];
			i++;
		}
	}
	for (int j = 0; j < n ; j++) {
		if (arr[j] == 1) {
			temp[i] = arr[j];
			i++;
		}
	}
	for (int j = 0; j < n ; j++) {
		if (arr[j] == 2) {
			temp[i] = arr[j];
			i++;
		}
	}
	for (int j = 0; j < n ; j++) arr[i] = temp[i];
}


// 2nd appraoch very optimal approach and safe approach
// efficent solution (dutch National flag Algo)
void sort012_2Approach(int arr[] , int n) {
	int low = 0, high = n - 1, mid = 0;
	// int arr [] = {0, 1, 1, 2, 0, 1};

	while (mid <= high) {
		// debug(low); debug(high); debug(mid);
		// debug(arr[low]); debug(arr[high]); debug(arr[mid]);
		if (arr[mid] == 0) {
			swap(arr[low], arr[mid]);
			LA(arr, n);
			low++;
			mid++;
		}
		else if (arr[mid] == 1) {
			mid++;
		} else {
			swap(arr[mid], arr[high]);
			LA(arr, n);
			high--;
		}
	}
}

//////////////////////////////////////////////
void interval(vector<pair<int, int>> v) {
	vector<pair<int, int> > res;
	res.push_back(v[0]);
	for (int i = 1; i < (int)v.size(); i++) {
		if (res[res.size() - 1].second >= v[i].first) {
			res[res.size() - 1].second = max(res[res.size() - 1].second, v[i].second);
		} else {
			res.push_back(v[i]);
		}
	}
	for (int i = 0; i < (int)res.size(); i++) {
		cout << res[i].first << " " << res[i].second << endl;
	}
}


// merge interval
void solve_interval() {
	int n;
	cin >> n;
	vector <pair<int, int>> v;
	for (int i = 0; i < n; i++) {
		int x, y; cin >> x >> y;
		v.push_back({x, y});
	}
	sort(v.begin(), v.end());
	interval(v);
}

/////////////////////////////////////////////////////////////
// meeting maximum people in the meeting
int max_people(int arr[], int dep[], int n) {
	sort(arr, arr + n); // arival soerted
	sort(dep , dep + n); // departure sorted
	int i = 1, j = 0, res = 1, curr = 1;
	while (i < n && j < n) {
		if (arr[i] <= dep[j]) {
			curr++; i++;
		} else {
			curr--; j++;
		}
		res = max(res, curr);
	}
	return res;
}

void solve_max_people() {
	int arr[] = {900, 600, 700};
	int dep[] = {1000
	             , 800, 730
	            };
	int n = sizeof(arr) / sizeof(arr[0]);
	cout << max_people(arr, dep, n);
}

/////////////////////////////////////////////////
// cycle sort Algo
// it does minimum memery writes
// in place algo => does not required extra space
// not stable
// worst case => O(n2)


// cycle sort on distinct element
int cycleSort(int arr[], int n) {
	int writes = 0;
	for (int cs = 0; cs < n - 1; cs++) {
		int item = arr[cs];
		int pos = cs;

		// find position where we put the element
		for (int i = cs + 1; i < n ; i++) {
			if (arr[i] < item) pos++;
		}

		// if item already in the correst position
		if (pos == cs) continue;

		// ignore all the duplicate
		while (item == arr[pos])
			pos += 1;

		if (pos != cs) {
			swap(item, arr[pos]);
			writes++;
		}
		while (pos != cs) {
			pos = cs;

			// find positon where put the element
			for (int i = cs + 1; i < n ; i++) {
				if (arr[i] < item) pos++;
			}

			// ignore all the duplicate elements
			while (item == arr[pos])
				pos += 1;

			// put the elements to it's right position
			if (item != arr[pos]) {
				swap(item, arr[pos]);
				writes++;
			}
		}

	}
	return writes;
}

void solve_cylce_sort() {
	int arr[] = {20 , 40, 50, 30, 20, 50, 10 , 30};
	int n = sizeof(arr) / sizeof(arr[0]);
	cout << " total rounds " << cycleSort(arr, n) << nl;
	for (auto it : arr) cout << it << " ";
}

// //////////////////////////////////////
// Heap sort

//      A
//   B     C
// D   E F   G

// if a node is at index x -> i
// its left child is at  ----> 2 * i
// its right child is at ----> 2 * i + 1
// its present child is at --> i / 2
// A B C D E F G
// 1 2 3 4 5 6 7


//       A
//    B      C
// D     E

// A B C D E
// 1 2 3 4 5


//      A
//   B     C
//       D   E
// A B C - - D E
// 1 2 3 4 5 6 7

// full binary tree
// hight of full binary tree is 2^(n + 1) - 1
/*
        A
   B         C
D     E   F    G
*/

// complete binary tree in which there is no missing element
//  full binary teree is complete binary
// hight of complete bbinary tree is logn
// but
// eg :
/*
           A
       B        C
            D      E
    */
// A B C - - D E     // there is 2 missing element so this is not complete binary tree


//////////////////////////////////////
// Heap => is complete binary tree
// maxHeap => is complete binary tree satistisfying condition that every node having element greater than or equal to all it's decendence
//EG:
//       50
//    30    20
//  10  10 8 16

// minHeap => is complete binary tree satistisfying condition that every node having element less than or equal to all it's decendence
// EG:
//        10
//    20       30
// 35   40  32    25


///////////////// insertion in the maxHeap //////////////////////////////

////////////////////////////////
// insert 60 inside the maxHeap
/*           50
       30           40
    15     10   8       16
  60
*/
// 50 30 40 15 10 8 16 60  // this is not maxHeap so we have to rearrange element in such way that it become maxHeap

/*           60
       50           40
    30     10   8       16
  15
*/
// 60 50 40 15 10 8 16 15 // now this is comeplete binary tree and maxHeap
// Time teken by insert element is = number of swaps
//  number of swap = hight of binary tree
//  height of binary tree is = TC O(logn)
// the Time taken for inserting 1 element in the Heap is = min O(1) and max O(logn)
// in inserting element element moves from leaf to roots // direction of adjucment is upword

//////////////////// delete operation in the maxHeap //////////////////////////
/*
50
30           20
15       10  8       16
*/
// 50 30 20 15 10 8 16
// in maxHeap we can only delete root(maximum element) element in the maxHeap //
// when 50 deleted from the maxHeap than last elemet from complete binary tree(maxHeap) is go upword is 16
/*
     16
30           20
15       10  8
*/

/*
         30
    16           20
15       10  8
*/
// now it is complete binary tree and 50 is delete
// max Time required to adjuctment after deletion of element is
// TC O(logn)

// when we delete  element from the maxHeap than we one space is empty in the array
// so we can maintaine that element in the array at last


///////////// insert n element in the heap /////////////////////////////
// 1 element take O(logn) time
// n element take O(nlogn) time

////////////////////// heapify //////////////////////////////
// heapify => is procedure for inserting a element in the heap
// in heapify we have to look downword from right side of element
// eg :
/*       10
    20         15
12     40  25       18
*/

// apply heapify from right
/*         40
    20         25
12     10  15       18
*/

// time taken by heapify for inserting n element is O(n)


//////////////////////////// priority Queue //////////////////////////////////
/*smaller number                                      larger number
  higher priority                                     Higher priority */

// A => 8 6 3 10 5 4 9                           B => 8 6 3 10 5 4 9
//      1 2 3  4 5 6 7                                1 2 3  4 5 6 7
// min Heap                                           max Heap
/*
            3                                           10
      5           4                               8            9
  10       8  6       9                    6          5   3         4  */

////////////////////////////////////////////////////////////////////////////
// heapsort code
void heapify(int arr[], int n , int i) {
	int largest = i;
	int l = 2 * i + 1;
	int r = 2 * i + 2;

	if (l < n && arr[l] > arr[largest]) {
		largest = l;
	}

	if (r < n && arr[r] > arr[largest]) {
		largest = r;
	}

	if (largest != i) {
		// debug(i);
		// debug(largest);
		// debug(arr[i]);
		// debug(arr[largest]);
		swap(arr[i], arr[largest]);
		// debug(i);
		// debug(largest);
		// debug(arr[i]);
		// debug(arr[largest]);
		heapify(arr, n , largest);
	}
}
void buildheap(int arr[], int n) {
	for (int i = n / 2 - 1; i >= 0; i--) {
		heapify(arr, n, i);
	}
}
void heapSort(int arr[], int n) {
	buildheap(arr, n);
	for (int i = n - 1; i > 0; i--) {
		swap(arr[0], arr[i]);
		heapify(arr, i, 0);
	}
}
void solve_heap_sort() {
	int arr[] = {20, 10, 30, 5, 50, 40};
	int n = sizeof(arr) / sizeof(arr[0]);
	heapSort(arr, n);
	for (auto it : arr) cout << it << " ";
}


///////////////////////////////////
// countting sort algo
// counting sort algo is linear time algorithem
// naive approach for count_sort ---- TC O(n + k)
void count_sort(int arr[], int n, int k) {
	int count[k];
	for (int i = 0; i < k; i++) count[i] = 0;
	for (int i = 0 ; i < n ; i++) count[arr[i]]++;
	int index = 0;
	for (int i = 0; i < k; i++) {
		for (int j = 0; j < count[i]; j++) {
			arr[index] = i;
			index++;
		}
	}
}

// optimal approach for count sort
void count_sort1(int arr[], int n , int k) {
	int count[k];
	for (int i = 0; i < k; i++) count[i] = 0 ;
	for (int i = 0 ; i < n ; i++) count[arr[i]]++;
	for (int i = 1; i < k; i++)
		count[i] = count[i - 1] + count[i];
	int output[n];
	// 1 4 4 4 6
	for (int i = n - 1; i >= 0; i--) {
		output[count[arr[i]] - 1] = arr[i];
		count[arr[i]]--;
	}

	for (int i = 0; i < n ; i++) arr[i] = output[i];
}
void solve_count_sort() {
	int arr[] = {1, 4, 4, 1, 0, 1};
	int n = sizeof(arr) / sizeof(arr[0]);
	int k = 5;
	// count_sort(arr, n , k );
	count_sort1(arr, n , k );
	for (auto it : arr) cout << it << " ";
}
int main()
{
	debug_code();
	init_code();

	// sort function
	// int arr[] = {2, 1, 5, 3, 4};
	// int n = sizeof(arr) / sizeof(arr[0]);
	// sort(arr, arr + n, greater<int>());
	// LA(arr, n);

	// vector<int> vec = {2, 1, 5, 3, 4};
	// sort(vec.begin(), vec.end(), greater<int>());
	// debug(vec);

	// 2d arrray
	// point arr[] = {{3, 10}, {2, 8}, {5, 4}};
	// int n = sizeof(arr) / sizeof(arr[0]);
	// sort(arr, arr + n, my_comp); // sort function internally using "Quick sort"
	// for(auto i : arr) cout << i.x << " " << i.y << endl;

	/////////////////////////////////////////////
	// stable sorting algoritham
	//  arr[] = {("anil", 50), ("ayan", "80"), ("piyush", 50), ("ramesh", 80)};
	// after sorting using stable sorting algo
	// arr[] = {("anil", 50), ("piyush", 50),("ayan", "80"),("ramesh", 80)};
	// after sorting using unstable sorting algo
	// arr[] = { ("piyush", 50), ("anil", 50),("ramesh", 80),("ayan", "80")};

	// Example
	//  stable Algo : Bubble sort, Insertion sort, Merge sort
	// unstable Algo: selection sort, QuickSort, Heap sort

	///////////////////////////////////////
	// bubble sort();
	// int arr[] = {34, 15, 29, 8};
	// // int arr[] = {1, 2, 3, 4};
	// int n = sizeof(arr) / sizeof(arr[0]);
	// bubble_sort(arr, n);
	// LA(arr, n);

	/////////////////////////////////////////
	// selection sort();
	// int arr[] = {34, 11, 67, 8, 19};
	// int n = sizeof(arr) / sizeof(arr[0]);
	// selection_sort(arr, n);
	// LA(arr, n);

	////////////////////////////////////
	// insertion_sort()
	// int arr[] = {34, 11, 67, 8, 19};
	// int n = sizeof(arr) / sizeof(arr[0]);
	// LA(arr, n);
	// insertion_sort(arr, n);
	// LA(arr, n);

	////////////////////////////////////////////
	// merge 2 array into single array
	// int A[] = {2, 8, 15, 18};
	// int B[] = {5, 9, 12, 17};
	// int m = sizeof(A) / sizeof(A[0]);
	// int n = sizeof(B) / sizeof(B[0]);
	// //  return array by merge function print that array
	// int *C = merge(A, m,B, n);
	// LA(C, m + n);

	//////////////////////////////////////////
	// merge more than 2 list
	// int A[] = {4, 6, 12};
	// int B[] = {3, 5, 9};
	// int C[] = {8, 10, 16};
	// int D[] = {2, 4, 18};
	// int m = sizeof(A) / sizeof(A[0]);
	// int n = sizeof(B) / sizeof(B[0]);
	// int o = sizeof(C) / sizeof(C[0]);
	// int p = sizeof(D) / sizeof(D[0]);
	// int *final = merge_more_list(A, m, B, n, C, o, D, p);
	// LA(final, m + n + o + p);

	//////////////////////////////////////////
	// merge_sort();
	// int A[] = {34, 11, 67, 8, 19};
	// int n = sizeof(A) / sizeof(A[0]);
	// int low = 0;
	// int high = n - 1;
	// merge_sort(low, high, A);
	// LA(A, n);


	// //////////////////////////////////////
	// intersection of two sorted array
	// 1st approach
	// int A[] = {3, 5, 10, 10, 10, 15, 15, 20};
	// int B[] = { 5, 10, 10, 15, 30};
	// int m = sizeof(A) / sizeof(A[0]);
	// int n = sizeof(B) / sizeof(B[0]);
	// set<int> output;
	// intersection_array(A, m , B, n, output);
	// debug(output);


	// 2nd approch
	// int A[] = {3, 5, 10, 10, 10, 15, 15, 20};
	// int B[] = { 5, 10, 10, 15,30};
	// int m = sizeof(A) / sizeof(A[0]);
	// int n = sizeof(B) / sizeof(B[0]);
	// intersection_array1(A, m , B, n);


	// 3rd approach
	// int A[] = {10, 20, 20, 40, 60};
	// int B[] = {2, 20, 20, 20};
	// int A[] = {3, 5, 10, 10, 10, 15, 15, 20};
	// int B[] = { 5, 10, 10, 15, 30};
	// int m = sizeof(A) / sizeof(A[0]);
	// int n = sizeof(B) / sizeof(B[0]);
	// intersection_array_merge(A, m, B, n);

	///////////////////////////////////////////
	//  union of array
	// 1st approach
	// int A[] = {3, 5, 10, 10, 10, 15, 15, 20};
	// int B[] = { 5, 10, 10, 15, 30};
	// int m = sizeof(A) / sizeof(A[0]);
	// int n = sizeof(B) / sizeof(B[0]);
	// union_array(A, m , B, n);
	// union_array1(A, m , B, n);

	////////////////////////////////////////////
	// count inversion in the array
	// int A[] = {2, 4, 1, 3, 5};
	// int A[] = {6, 5, 4, 3, 2, 1};
	// int n = sizeof(A) / sizeof(A[0]);
	// int temp[n];
	// // cout << inversion(A, n);
	// // cout << inversion1(A, n);
	// cout << inversion2(0, n - 1, A, temp);

////////////////////////////////////////////////////////////
	//  naive partition
	// int arr[] = {5, 3, 12,  8, 5};
	// int arr[] = {34, 11, 67, 8, 19};
	// int n = sizeof(arr) / sizeof(arr[0]);
	// // int pivot = 4;
	// cout << naivePartiton(0, n - 1, arr, pivot);
	// // cout << partision(0, n - 1, arr);
	// LA(arr, n);


// ---	// lometoPartition
	// int arr[] = {5, 3, 12,  8, 5};
	// int arr[] = {34, 11, 67, 8, 19};
	// int n = sizeof(arr) / sizeof(arr[0]);
	// cout << lometoPartition(0, n - 1, arr);
	// LA(arr, n);

	// /////////////////////////////////////////
	// QuickSort
	int A[] = {34, 11, 67, 8, 19};
	int n = sizeof(A) / sizeof(A[0]);
	int l = 0, h = n - 1;
	QuickSort(A, l , h);
	// QuickSort_Tail(A, l , h); // it it faster it does not take extra stack space
	// // lometoPartition_quickSort(A, l, h);
	LA(A, n);

	/////////////////////////////////////////////////////
	// find out kth smallest element in the array
	// int arr[] = {10, 5, 30, 12};
	// int arr[] = {30, 20, 5, 10, 8};
	// int arr[] = {10, 4, 5, 8, 11, 6, 26};
	// int n = sizeof(arr) / sizeof(arr[0]);
	// int k = 5;
	// // cout << kthSmallestEle(arr, n, k);
	// cout << kthSmallestEle_lometoPartiton(arr, n, k);

	// /////////////////////////////////////
	// min dif in array
	// int arr[] = {1, 8, 12, 5, 18};
	// int arr[] = {8, 15};
	// int arr[] = {8, -1, 0, 3};
	// int arr[] = {10 };
	// int n = sizeof(arr) / sizeof(arr[0]);
	// cout << min_diff1(arr, n);
	// cout << min_diff(arr, n);

	/////////////////////////////////////////////
	// chocate problem minimum diffrence
	// int arr[] = {7, 3, 2, 4, 9,12, 56};
	// int n = sizeof(arr) / sizeof(arr[0]);
	// int m = 3;
	// cout << chocolate_diff(arr, n , m);

	//////////////////////////////////////////////
	// Sort an Array with two types of elements
	// int arr[] = {15, -3, -2, 18};
	// int arr[] = {15,-1, 0, 2, -7 , -3, -2, 18};
	// int n = sizeof(arr) / sizeof(arr[0]);
	// // int low = 0, high = n - 1;
	// segregatePosNegative3(arr, n);
	// // segregatePosNegative1(arr, n);
	// // segregatePosNegative2(arr, n);
	// LA(arr, n);

	///////////////////////////////////////////////
	// sort 3 element sorting 0, 1 and 2
	// int arr [] = {0, 1, 1, 2, 0, 1};
	// int n = sizeof(arr) / sizeof(arr[0]);
	// // sort012(arr, n);

	// sort012_2Approach(arr, n);
	// LA(arr, n);
	// for(auto it : arr) cout << it << " " ;

/////////////////////////////////////////////////////
	//  merge_interval
	// solve_interval();



//////////////////////////////////////////////
// solve_max_people();


// ////////////////////////////////////
	// cycle sort
	// solve_cylce_sort() ;


//////////////////////////////////////
	//  heap sort
	// solve_heap_sort();
////////////////////////////////////////////
	// count sort Algo
	// solve_count_sort();
}