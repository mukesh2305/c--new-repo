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
////////////////////////////////////////////////////////////////
// 1 : [ 15. Minimum Difference in an Array ]

int MinimumDifference(int arr[], int n) {
	// 2 4 5 9 7
	sort(arr,  arr + n);
	int mn = INT_MAX;
	for (int i = 1; i < n ; i++) {
		mn = min(mn, arr[i] - arr[i - 1]);
	}
	return mn;
}

void solve_MinimumDifference() {
	int arr[] = {2, 4, 5, 9, 7};
	int n = sizeof(arr) / sizeof(arr[0]);
	cout << MinimumDifference(arr, n);
}

////////////////////////////////////////////////////
// 2 : [ 1. Bubble Sort ]
void bubbleSort(int arr[], int n) {
	bool swapped ;
	for (int round = 1 ; round < n; round++) {
		swapped = false;
		for (int i = 0; i < (n - round); i++) {
			if (arr[i] > arr[i + 1]) {
				swap(arr[i], arr[i + 1]);
				swapped = true;
			}
		}
		if (swapped == false) break;
	}
}

// bubble sort recursive
void bubbleSort1(int arr[], int n ) {
	if (n == 0 || n == 1) return;

	bool flag = true;
	for (int i = 0 ; i < n - 1; i++)
		if (arr[i] > arr[i + 1]) {
			swap(arr[i], arr[ i + 1]);
			flag = false;
		}

	if (flag) return;
	bubbleSort1(arr, n - 1);
}

void solve_bubbleSort() {
	int arr[] = { 4, 1, 3, 9, 7};
	int n = sizeof(arr) / sizeof(arr[0]);
	// bubbleSort(arr, n );
	bubbleSort1(arr, n);
	for (auto it : arr) cout << it << " ";
}


/////////////////////////////////////////////////////
// 3 : [ 2. Insertion Sort ]

void insert(int arr[], int i) {
	arr[i + 1] = arr[i];
}

void insertionSort(int arr[], int n) {
	for (int i = 1; i < n ; i++) {
		int temp = arr[i];
		int j = i - 1;
		while (j >= 0 && arr[j] > temp) {
			insert(arr, j);
			j--;
		}
		arr[ j + 1] = temp;
	}
}

void solve_insertionSort() {
	int arr[] = {4, 1, 3, 9, 7};
	int n = sizeof(arr) / sizeof(arr[0]);
	insertionSort(arr, n);
	for (auto it : arr) cout << it << " ";
}

/////////////////////////////////////////////////////////////
// 4 : [ 3. Quick Sort ]

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

void QuickSort(int arr[], int l, int h) {
	if (l < h) {
		int j = partision(l, h, arr);
		QuickSort(arr, l, j - 1);
		QuickSort(arr, j + 1, h); // tail call in recursive call remove than it will not take extra space
	}
}

void solve_quick_sort() {
	int arr[] = {2, 1, 6, 10, 4, 1, 3, 9, 7};
	int n = sizeof(arr) / sizeof(arr[0]);
	int low = 0, high = n - 1;
	QuickSort(arr, low, high);
	LA(arr, n)
} 


//////////////////////////////////////////////////////////////////////
// 5 :[ 4. Binary Array Sorting ]

void binSort(int A[], int N) {
	int j = 0;
	for(int i = 0; i < N; i++) {
		if(A[i] == 0) {
			swap(A[i], A[j]);
			j++;
		}
	}
}


void solve_binSort() {
	int arr[] = {1, 0, 1, 1, 1, 1, 1, 0, 0, 0}; 
	int n = sizeof(arr) / sizeof(arr[0]); 
	binSort(arr, n); 
	for(auto it : arr) cout << it << " ";
}
int main() {
	debug_code();
	init_code();
	///////////////////////////////////////////////
// 1 : [ 15. Minimum Difference in an Array ]
	// solve_MinimumDifference();

/////////////////////////////////////////////
	// 2 : [ 1. Bubble Sort ]
	// solve_bubbleSort();

/////////////////////////////////////////////////
	// 3 : [ 2. Insertion Sort ]
	// solve_insertionSort();

////////////////////////////////////////////////////
	// 4 : [ 3. Quick Sort ]
	// solve_quick_sort();

//////////////////////////////////////////////////
// 5 :[ 4. Binary Array Sorting ]
	solve_binSort();
}