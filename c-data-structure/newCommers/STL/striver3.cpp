#include <bits/stdc++.h>
using namespace std;

bool comp(int n1, int n2) {
	if (n1 >= n2) return true; // decending order sorting
	else return false;
}

bool comp(int n1, int n2) {
	if (n1 <= n2) return true; // ascending order sorting
	else return false;
}


bool comp(pair<int, int> el1, pair<int, int> el2) {
	if (el1.first < el2.first) {
		return true;
	}
	if (el1.first == el2.first) {
		if (el1.second > el2.second) {
			return true;
		}
	}
	return false;
}


int main()
{
	// vector<int> vec(5, 0);
	// for(auto &it : vec) cin >> it;
	// sort(vec.begin() + 1, vec.begin() + 4); // sort 1 to 3 element
	// for(auto &it : vec ) cout << it << " " ;

	// array<int, 5 > arr= {1, 2, 8, 9, 10};

	// ===============================================
	// bitset => 1 bit

	// bitset<5> bt; // stores 1 or 0
	// cin >> bt ; // 10111

	// all(if all the true than return true if not than return false) // return true or false
	// bool result = bt.all();
	// cout  << result << endl ;

	// any
	// if any one is set(1) than output will be true

	// cout << bt.any() << endl;

	// count
	// print the count of set(1) bit
	// cout << bt.count() << endl;

	// flip
	// flip the set(1) to unset(0) and unset(0) to set(1)
	// 	cout << bt.flip(2) << endl ;
	// 	cout << bt.flip() << endl;

	// none
	//  if none of th bit are set than it return true if one of the bit is set than it return false
	// cout << bt.none() << endl; // 00000 // true
	// cout << bt.none() << endl; // 00100 // false

	// set
	// it set all the bit
	// cout << bt.set() << endl ; // 00111 // output => 1111
	// cout << bt.set(2) << endl;   // sets at 2nd index

	// cout << bt.set(2, 0);

	// reset =>
	// turn all the index to 0
	// cout << bt.reset() ;
	// cout << bt.reset(1);

	// test
	// check if bit is test or no at index 1
	// cout << bt.test(3);

	// Alogrithms ===============================
	// ====================

	// int n;
	// cin >> n;
	int n = 5;
	int arr[5] = {1, 2, 1, 3, 1};

	// for(int i = 0; i<n; i++) cin >> arr[i];
	// time compexity - n log n
	// sort(arr , arr+n);
	// for(int i = 0; i<5; i++) cout << arr[i] << " ";

	// sort from 1 to 3
	// sort(arr + 1, arr + 4);
	// for (int i = 0; i < 5; i++) cout << arr[i] << " ";

	// reverse ----
	// reverse(arr, arr+n);
	// for (int i = 0; i < 5; i++) cout << arr[i] << " ";

	//  reverse from 1 to 3
	// reverse(arr+1, arr+4);
	// for (int i = 0; i < 5; i++) cout << arr[i] << " ";

	vector<int> vec{1, 2, 1, 3, 1};
	// sort(vec.begin(), vec.end() );
	// for (auto it : vec) cout << it  << " ";

	// sort from index 1 to 3
	// sort(vec.begin() + 1, vec.begin()+4);
	// for (auto it : vec) cout << it  << " ";

	// reverse ---------------
	// reverse(vec.begin(), vec.end());
	// for (auto it : vec) cout << it  << " ";

	// reverse from index 1 to 3
	// reverse(vec.begin() + 1 , vec.begin() + 4);
	// for (auto it : vec) cout << it  << " ";

	//=================calculate mx element in the array ----------------------------

	// 1. complex way
	// int mx = INT_MIN;
	// for(int i = 0;i<n; i++) {
	// 	if(arr[i] > mx){
	// 		mx = arr[i];
	// 	}
	// }
	// cout << mx;

	// using inbuilt function
	// int mx = *max_element(arr, arr+n);
	// cout << mx;

	// int mx = *max_element(vec.begin() , vec.end());
	// cout << mx;

	// --------------- calculate min element in the array -------------------
	// int mn = arr[0];

	// for(int i= 0; i<n; i++) {
	// 	if(arr[i] < mn) mn = arr[i];
	// }
	// cout << mn;

	// int mn = *min_element(arr, arr+n);
	// cout << mn << endl;

	// int mn = *min_element(vec.begin(), vec.end());
	// cout << mn << endl ;

	// ------------- calcluate the sum -------
	// int sum = 0;
	// for(int i = 0; i<n; i++) sum += arr[i];
	// cout << sum;

	// accumulate
	// int sum = accumulate(arr, arr+n, 0);
	// cout << sum ;

	// int sum = accumulate(vec.begin(), vec.end(), 0);
	// cout << sum ;

	// --------------
	// int ar[5] = {1, 2, 1, 3, 1};
	// time complexy O(n);

	// int cnt = 0;
	// int x = 1;
	// for(int i = 0; i<n; i++) {
	// 	if(ar[i] == x) cnt++;
	// }
	// cout << cnt << endl;

	// count ------------------
	// int cnt = count(arr , arr +n , 1);
	// cout << cnt;

	// int cnt = count(vec.begin(), vec.end(), 1);
	// cout << cnt ;

	// ----------------------------
	// find the first occurence of 2 with index
	//
	// int ind = -1;
	// int x = 1;
	// for(int i = 0; i<n;i++) {
	// 	if(arr[i] == x) {
	// 		ind = i;
	// 		break;
	// 	}
	// }

	// cout << ind << endl;

	// auto it = find(arr, arr+n, 2);
	// cout << it - arr ; // it return iterator address (indexAddress - firstAddress);

	// auto it = find(vec.begin(), vec.end(), 2);
	// cout << it - vec.begin() << endl;

	// auto it = find (vec.begin(), vec.end(), 4);

	// if(it == vec.end()) cout << "Element is not present";
	// else cout << "Element is first present at : " << it - vec.begin();

	// =========================== Binary Search ========================== //
	// this stl only work on sorted arrays
	//  arr[] -> {1,5,7,9, 10}
	// 9 => true => 9 exists in the array
	// 8 => false => 8 does not exsits in the array

	// binary_search(firstIterator, lastIterator, x)
	// returns a true or returns a false
	// works in (((log n))) complexity

	// sort(arr, arr + n);
	// bool res = binary_search(arr, arr + n, 2);
	// if (res) cout << "Element is present";
	// else cout << "Element is not present";

	// int siz = 7;
	// int arr1[]={10,2,34,2,5,4,1};
	//  	sort(arr1,arr1+siz);//sort arr1ay in ascending order before using binary search
	//  	cout << binary_search(arr1,arr1+siz,10) << endl;//return 1 as element is found
	//  	cout << binary_search(arr1,arr1+siz,3) << endl;

	// lower_bound function
	// returns an iterator pointing to the first
	// element which is not less than x
	// int num = 11;
	// int arr1[] = {1, 5, 7, 7, 8, 10, 10, 10, 11, 11, 12} ;
	// vector<int> vec1 = {1, 5, 7, 7, 8, 10, 10, 10, 11, 11, 12};
	// x = 10 it point 10
	// x = 6 it point 7
	// x = 13  it point arr+n or vec.end();
	// this works in log N
	//  auto it1 = lower_bound(arr1, arr1+num, 6);
	// int ind = it1 - arr1;
	// cout << ind << " " << arr1[ind] <<  endl ;

	// auto i = lower_bound(vec1.begin(), vec1.end(), 6);
	// int ind = i - vec1.begin();
	// cout <<  ind << " " << vec1.at(ind) << " " << vec1[ind] << endl;
	// auto ind = lower_bound(vec1.begin() , vec1.end(), 6) - vec1.begin();
	// cout << ind << endl;

	// upper bound
	// returns an iterator which points to an element which is
	// just greater than x
	// int arr1[] = {1, 5, 7, 7, 8, 10, 10, 10, 11, 11, 12} ;
	// vector<int> vec1 = {1, 5, 7, 7, 8, 10, 10, 10, 11, 11, 12};

	// arr[] -> {1, 5, 7, 7, 8, 10, 10, 10, 11, 11, 12}
	// x = 7  it points to 8
	// x = 6  it points to 7
	// x = 12 -> end() iterator because it isnot found
	// x = 15 -> end() iterator

	// auto it1 = upper_bound(arr1, arr1+n, 12);
	// int ind = it1 - arr1;
	// cout << ind ;
	// auto it1 = upper_bound(vec1.begin(), vec1.end(), 12);
	// int ind = it1 - vec1.begin();
	// cout << ind << endl ;

	// int ind =  upper_bound(vec1.begin(), vec1.end(), 6) - vec1.begin();
	// cout << ind << endl ;

	// -----------------------------------------------------------
	// Q1. find me the first index where the element X lies
	// find function can be used but that takes O(N) times
	// the array is sorted..
	// int arr1[] = {1, 5, 7, 7, 8, 10, 10, 10, 11, 11, 12} ;
	// // find x = 7
	// int ind = lower_bound(arr, arr + n, x) - arr;

	// // find x = 6
	// int ind = lower_bound(arr, arr + n, x) - arr;

	// --
	// There are couple of ways to do it
	// 1st way
	// if (binary_search(arr, arr + n, x) == true) {
	// 	cout << lower_bound(arr, arr + n, x) - arr;
	// }
	// else cout << "does not exists";

	//
	// 2nd way
	// int ind = lower_bound(arr, arr + n, x) - arr;
	// // arr[] -> {1, 5, 7, 7, 8, 10, 10, 10, 11, 11, 12}
	// /////////////0  1  2  3  4  5   6   7   8   9   10
	// // find x = 13 -> ind = 11, which is out of bound
	// // hence arr[11] will give you runtime error
	// if (ind != n && arr[ind] == x) {
	// 	cout << "Found at: " << ind;
	// }
	// else {
	// 	cout << "Not found";
	// }

	// Find me the last occurrence of x in an arr
	// arr[] -> {1, 5, 7, 7, 8, 10, 10, 10, 11, 11, 12}
	/// index/////0  1  2  3  4  5   6   7   8   9   10

	// last occurrence of x = 10, ans = 7th index
	// last occurrence of x = 6, ans = does not exists
	// last occurrence of x = 0,
	// last occurence of x = 13
	// int ind = upper_bound(arr, arr + n, x) - arr;
	// ind -= 1;
	// if (ind >= 0 && arr[ind] == x) {
	// 	cout << "last occurrence: " << ind;
	// }
	// else {
	// 	cout << "Does not exists";
	// }

	//
	// Q3. tell me the number of times the x appears in arr
	// int num = 11;
	// int ar[] = {1, 5, 7, 7, 8, 10, 10, 10, 11, 11, 12};
	// ///index/////0  1  2  3  4  5   6   7   8   9   10
	// int hi = upper_bound(ar , ar+num, 10) - arr;
	// int li = lower_bound(ar, ar+num, 10) - arr;
	// cout << hi - li << endl;

	// Next Permutation
	// string s = "abc"
	// all permutations are as follows:

	// abc
	// acb
	// bac
	// bca
	// cab
	// cba

	// string s = "abc";
	// bool res = next_permutation(s.begin(), s.end());
	// cout << res <<  << endl;
	// int sz = s.size();

	// this is not good way use recursive way to solve this type of problems
	// do {
	// 	cout << s << endl ;
	// } while(next_permutation(s.begin(), s.end()));

	// recursive way to print all the permutations of a string using next_permutation stl function



	// prev permutation
	// bool res = prev_permutation(s.begin(), s.end());

	sort(arr, arr + n, comp);
	// sort(arr, arr + n, greater<int> );
	for (auto it : arr) cout << it << " ";
}
