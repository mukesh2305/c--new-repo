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
template <class T> void _print(T arr[], int v) {cerr << "[ "; for (int i = 0; i < v; i++) {_print(arr[i]); cerr << " "; } cerr << "]";}
template <class T> void _print(unordered_set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(unordered_multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(unordered_map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i.first); _print(i.second); cerr << " ";} cerr << "]";}

int gcd(int a, int b) {
	return b == 0 ? a : gcd(b, a % b);
}
ll lcm(int a, int b) {
	ll a0 = a;
	ll b0 = b;
	return a0 * b0 / __gcd(a0, b0);
}

//////////////////////////////////////////////////////////////////////////////////
// search
// insert   /// => O(1) time takes to insert , delete and search element in the hashing
// delete


// hasing is not use if :
// 1 : finding closest value  // use "AVL tree" and "red black tree" we use
// 2 : sorted Data //         // use "AVL tree" and "red black tree" we use
// 3 : prefix searching       // Trie data structure is used for this

///////////////////////////
// => => Application of hashing <= <=
// 1 => Disctionary
// 2 => Database Indexing
// 3 => Cryptography
// 4 => Caches
// 5 => Symbol Tables in Compiler/Interpreter
// 6 => Routers
// 7 => Caches
// 8 => Getting data from databases
// etc...


// search , insert and delete
// collision Handling
// -> chaning
// -> open addressing
// 		linear probling
// 		qudratic probling
// 		double probling

struct my_hash {
	int bucket;
	list<int> *table;

	my_hash(int b) {
		bucket = b;
		table = new list<int>[bucket];
	}

	void insert(int k) {
		int i = k % bucket;
		table[i].push_back(k);
	}

	bool search(int k) {
		int i = k % bucket;
		for (auto x : table[i])
			if (x == k)
				return true;
		return false;
	}

	void remove(int k) {
		int i = k % bucket;
		table[i].remove(k);
	}

};


// open addressing
//  1 : => linear probing


// unordered_set
void set_show() {
	unordered_set<int> st;
	st.insert(10);
	st.insert(15);
	st.insert(20);
	st.insert(10);
	// if(st.find(15) == st.end()) cout << " not found" << nl;
	// else cout << " found " << nl;
	// if(st.count(10)) cout << " found " << nl;
	// else cout << " not found " << nl;
	// st.erase(10);
	// auto it = st.find(10);
	// st.erase(it);


	// remove all the element from set
	// st.erase(st.begin(), st.end());
	// cout << st.size() << nl;

}

//  MAP =>
// map is based on red black tree
// unordered_map is based on hashing

void map_show() {
	unordered_map<string, int> mp;
	// mp["mukesh"] = 23;
	mp["new"] = 9;
	mp.insert({"mukesh", 23});
	mp.insert({"hii", 11});
	// if(mp.find("hii") == mp.end()) cout << " not found hii" << nl;
	// else cout << " found hii " << nl;
	// for(auto it : mp) cout << it.first << " " << it.second << nl;
	// mp.erase(mp.begin(), mp.end());
	for (auto it = mp.begin(); it != mp.end(); it++)
		cout << it->first << " " << it->second << nl;
}
void solve_hash() {
	my_hash mh(7);
	mh.insert(10);
	mh.insert(20);
	mh.insert(15);
	mh.insert(7);
	cout << mh.search(10) << endl;
	mh.remove(15);
	cout << mh.search(15);
}


int count_distinct_ele(int arr[], int n) {
	int res = 0;
	for (int i = 0; i < n ; i++) {
		bool flag = false;
		for (int j = 0; j < i ; j++) {
			if (arr[i] == arr[j]) {
				flag = true;
				break;
			}
		}
		if (flag == false) res++;
	}
	return res;
}

int count_distinct_ele1(int arr[], int n ) {
	sort(arr , arr + n);
	int cnt = 1; // 10 10 20 30
	for (int i = 1; i < n ; i++) {
		if (arr[i] != arr[i - 1]) {
			cnt++;
		}
	}
	return cnt;
}

int count_distinct_ele2(int arr[], int n) {
	unordered_set<int> st;
	for (int i = 0; i < n ; i++) {
		st.insert(arr[i]);
	}
	return st.size();
}

int count_distinct_ele3(int arr[], int n) {
	unordered_set<int> st(arr, arr + n);
	return st.size();
}

void solve_distinct_ele() {
	int arr[] = { 10, 20, 10, 30, 40};
	int n = sizeof(arr) / sizeof(arr[0]);
	// cout << count_distinct_ele(arr, n);
	// cout << count_distinct_ele1(arr, n);
	// cout << count_distinct_ele2(arr, n);
	cout << count_distinct_ele3(arr, n);
}


// frequency of element
unordered_map<int, int> freq_ele(int arr[], int n) {
	unordered_map<int, int> mp;
	for (int i = 0; i < n ; i++) {
		mp[arr[i]]++;
	}
	return mp;
}

void freq_ele1(int arr[], int n) {
	int mx = INT_MIN;
	for (int i = 0; i < n; i++) {
		mx = max(mx, arr[i]);
	}

	int fq[mx + 1] = {0};
	for (int i = 0; i < n ; i++) {
		fq[arr[i]]++;
	}

	for (int i = 0; i < mx + 1; i++) {
		if (fq[i] > 0) {
			cout << i << " " << fq[i] << endl;
		}
	}
}

void solve_freq_ele() {
	int arr[] = {10, 12, 10, 15, 10, 20, 12, 12};
	int n = sizeof(arr) / sizeof(arr[0]);

	// unordered_map<int, int> mp= freq_ele(arr, n);
	// for(auto it : mp) {
	// 	cout << it.first << " " << it.second << endl;
	// }
	freq_ele1(arr, n);
}

// intersection of array
int intersection(int A[], int B[] , int m, int n) {
	set<int> stA(A, A + m);
	set<int> stB(B, B + n);
	int res = 0;
	for (auto itA : stA) {
		for (auto itB : stB) {
			if (itA == itB) res++;
		}
	}
	return res;
}

int intersection1(int A[], int B[], int m, int n) {
	set<int> st(A, A + m);
	int res = 0;
	for (int i = 0; i < n ; i++) {
		if (st.find(B[i]) != st.end()) {
			res++;
			st.erase(B[i]);
		}
	}
	return res;
}
void solve_intersection() {
	int A[] = {10, 20, 10, 30, 20};
	int B[] = {20, 10, 10, 30};
	int m = sizeof(A) / sizeof(A[0]);
	int n = sizeof(B) / sizeof(B[0]);
	// cout << intersection(A, B, m , n);
	cout << intersection1(A, B, m , n);
}


/////////////////////////////////
// union of two unsorted array
int union_of_unsorted(int A[], int B[], int m, int n) {
	set<int> stA(A , A + m);
	set<int> stB(B, B + n);
	for (int i = 0; i < n; i++) {
		if (stA.find(B[i]) != stA.end()) {
			stA.erase(B[i]);
		}
	}
	return stA.size() + stB.size();

}

int union_of_unsorted1(int A[], int B[], int m , int n) {
	unordered_set<int> stA(A, A + m);
	for (int i = 0; i < n ; i++) {
		stA.insert(B[i]);
	}
	return stA.size();
}

void solve_union_of_unsorted() {
	int A[] = {6,  20, 5, 15};
	int B[] = {10};
	int m = sizeof(A) / sizeof(A[0]);
	int n = sizeof(B) / sizeof(B[0]);
	// cout << union_of_unsorted(A, B, m, n);
	cout << union_of_unsorted1(A, B, m, n);
}

// /////////////////////////////////////
// given sum = k find pair that equal to
bool findPaire(int A[], int n, int sum) {
	int low = 0, high = n - 1;
	while (low < high) {
		if (A[low] + A[high] == sum) {
			return true;
		} else if (low == high - 1) {
			high--;
			low = 0;
		} else {
			low++;
		}
	}
	return false;
}
bool findPaire1(int A[], int n, int sum) {
	for (int i = 0; i < n ; i++) {
		for (int j = i + 1; j < n ; j++) {
			if (A[i] + A[i + 1] == sum) return true;
		}
	}

	return false;
}


bool findPaire2(int A[], int n, int sum) {
	unordered_set<int> st;
	for (int i = 0; i < n ; i++) {
		if (st.find(sum - A[i]) != st.end()) {
			return true;
		} else {
			st.insert(A[i]);
		}
	}
	return false;
}
void solve_findPaire() {
	// int A[] = {3, 2, 8, 15, -8};
	// int A[] = {2, 1, 6, 3};
	int A[] = {5, 6, -3, 6};
	int n = sizeof(A) / sizeof(A[0]);
	int sum = 3;
	// bool value = findPaire(A, n, sum);
	// cout << value << nl;
	// cout <<  findPaire1(A, n, sum);
	cout <<  findPaire2(A, n, sum);
}

////////////////////////////////////////////////
// subarray with sum = 0 ;
bool subArray_0(int arr[], int n) {
	for (int i = 0; i < n ; i++) {
		int cur_sum = 0;
		for (int j = i + 1; j < n; j++) {
			cur_sum += arr[j];
			if (cur_sum == 0) return true;
		}
	}
	return false;
}

bool subArray_01(int arr[], int n) {
	unordered_set<int> st;
	int pref_sum = 0;
	for (int i = 0; i < n ; i++) {
		pref_sum += arr[i];
		if (st.find(pref_sum) != st.end())
			return true;
		if (pref_sum == 0)
			return true;
		st.insert(pref_sum);

	}
	return false;
}

void solve_subArray_0() {
	int A[] = {3, 4, 3, -1, 1};
	int n = sizeof(A) / sizeof(A[0]);
	cout << subArray_01(A, n);
}

// /////////////////////////////////
// subArray with given sum
bool subArray_sum(int arr[], int n, int sum) {
	unordered_set<int> st;
	int pref_sum = 0;
	for (int i = 0; i < n ; i++) {
		pref_sum += arr[i];
		if (pref_sum == sum)
			return true;

		if (st.find(pref_sum - sum) != st.end())
			return true;

		st.insert(pref_sum);

	}
	return false;
}
void solve_subArray_sum() {
	int arr[] = {5, 8, 6, 13, 3, -1};
	int n = sizeof(arr) / sizeof(arr[0]);
	cout << subArray_sum(arr, n , 22);
}

///////////////////////////////////
// find longest subArray with given sum
int maxlen(int arr[], int n, int sum) {
	int res = 0;
	for (int i = 0; i < n; i++) {
		int cur_sum = 0;
		for (int j = i; j < n; j++) {
			cur_sum += arr[j];
			if (cur_sum == sum) {
				res = max(res, j - i + 1);
			}
		}
	}
	return res;
}

int maxlen1(int arr[], int n, int sum) {
	unordered_map<int, int> mp;
	int pref_sum = 0, res = 0;
	for (int i = 0; i < n ; i++) {
		pref_sum += arr[i];
		if (pref_sum == sum)
			res = i + 1;

		if (mp.find(pref_sum) == mp.end())
			mp.insert({pref_sum, i});
		if (mp.find(pref_sum - sum) != mp.end())
			res = max(res, i - mp[pref_sum - sum]);
	}
	return res;
}


void solve_maxlen() {
	int arr[] = {5, 2, 3, 4};
	int n = sizeof(arr) / sizeof(arr[0]);
	int sum = 5;
	// cout << maxlen(arr, n , sum );
	cout << maxlen1(arr, n , sum );

}


// ////////////////////////////////
// longest subarray with equal number of 0s and 1s
int longestSub(int arr[], int n) {
	int res = 0;
	for (int i = 0; i < n ; i++) {
		int c0 = 0, c1 = 0;
		for (int j = i; j < n ; j++) {
			if (arr[j] == 0)
				c0++;
			if (arr[j] == 1)
				c1++;
			if (c0 == c1)
				res = max(res, c0 + c1);
		}
	}
	return res;
}

int longestSub1(int arr[], int n) {
	for (int i = 0; i < n ; i++)
		if (arr[i] == 0) arr[i] = -1;
	// int arr[] = {1, -1, 1, 1, 1, -1, -1};

	unordered_map<int, int> ump;
	int sum = 0,  maxLen = 0;
	for (int i = 0; i < n; i++) {
		sum += arr[i];
		cout << sum << " " << i << " " << arr[i] << nl;
		// debug(sum);
		if (sum == 0)
			maxLen = i + 1;
		// debug(sum + n);
		// debug(i);
		if (ump.find(sum + n) != ump.end())
		{
			// debug(n);
			if (maxLen < i - ump[sum + n]) {
				maxLen = i - ump[sum + n];
			}

		}
		else {

			ump[sum + n] = i;
			// debug(ump[sum + n]);
		}
	}

	return maxLen;

}

void solve_longestSub() {
	int arr[] = {1, 0, 1, 1, 1, 0, 0};
	int n = sizeof(arr) / sizeof(arr[0]);
	// cout << longestSub(arr, n);
	cout << longestSub1(arr, n );
}

//////////////////////////////////////////
// longest subArray with sam of both array is same
int max_subArray(int arr[], int brr[],  int n) {
	int res = 0;
	for (int i = 0; i < n ; i++) {
		int sum1 = 0, sum2 = 0;
		for (int j = i; j < n ; j++) {
			sum1 += arr[j];
			sum2 += brr[j];
			if (sum1 == sum2)
				res = max(res, j - i + 1);
		}
	}
	return res;
}

int max_subArray1(int arr[], int brr[], int n) {
	int temp[n];
	for (int i = 0; i < n ; i++) {
		temp[i] = arr[i] - brr[i];
	}

	unordered_map<int, int> ump;
	int sum = 0;
	int mx_len = 0;

	for (int i = 0; i < n ; i++) {
		sum += temp[i];

		if (sum == 0)
			mx_len = i + 1;

		if (ump.find(sum) != ump.end())
			mx_len = max(mx_len, i - ump[sum]);
		else
			ump[sum] = i;
	}
	return mx_len;
}

void solve_max_subArray() {
	int arr[] = {0, 1, 0, 0, 0, 0};
	int brr[] = {1, 0, 1, 0, 0, 1};
	int n = sizeof(arr) / sizeof(arr[0]);
	// cout << max_subArray(arr, brr, n);
	cout << max_subArray1(arr, brr, n);
}


// ////////////////////////////////////////////
// longest subsquence array

int longest_subsequence(int arr[], int n) {
	sort(arr, arr + n);
	// 1 2 3 4 9 20
	int cnt = 1, res = 1;
	for (int i = 1; i < n ; i++) {
		if (arr[i] == arr[i - 1] + 1) {
			cnt++;
		} else {
			res = max(res, cnt);
			cnt = 1;
		}
	}
	return max(res, cnt);
}


int longest_subsequence1(int arr[], int n) {
	unordered_set<int> st(arr , arr + n);
	int res = 1;

	for (auto x : st) {
		debug(x);
		debug(st);
		if (st.find(x - 1) == st.end()) {
			int curr = 1;
			while (st.find(x + curr) != st.end())
				curr++;
			res = max(res, curr);
		}
	}
	return res;
}
void solve_longest_subsequence() {
	int arr[] = {1, 3, 4, 2};
	// int arr[] = {20, 30, 40};
	int n = sizeof(arr) / sizeof(arr[0]);
	// cout << longest_subsequence(arr, n);
	cout << longest_subsequence1(arr, n);

}

int main() {
	debug_code();
	init_code();

	// solve_hash();
	// set_show();
	// map_show();
	// solve_distinct_ele();
	// solve_freq_ele();
	// solve_intersection();
	// solve_union_of_unsorted();
	// solve_findPaire();
	// solve_subArray_0();
	// solve_subArray_sum();
	// solve_maxlen();
	// solve_longestSub();
	// solve_max_subArray() ;
	solve_longest_subsequence();
}
