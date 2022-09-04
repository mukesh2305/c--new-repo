#include <bits/stdc++.h>
using namespace std;

// namespace mukesh {
// 	int a  = 10;
// }

// struct  node
// {
// 	string str;
// 	int num;
// 	double doub;
// 	// int arr[4];
// 	char ch;
// 	node(string str_ , int num_, double doub_, char ch_) {
// 		str = str_;
// 		num = num_;
// 		doub = doub_;
// 		ch = ch_;
// 	}

// 	void value() {
// 		cout << str << " " << num << " " << doub << " " << ch;
// 	}

// };
// array<int , 3> arr;  // -> {0, 0, 0}

// // max size of 10^7 -> int, double, char
// int arr[10000000];

// // max size of 10^8 -> bool
// bool arr[100000000];
int main()
{

	// cout << mukesh::a;

	// 	// max size of 10^6 -> int, double, char
	// 	int arr[1000000];

	// 	// max size of 10^7 -> bool
	// 	bool arr[10000000];

	// 	array<int , 3> arr1 = {0} ; // it take first index as 0 after all of the index it put as 0
	// //  when we defin locally and we don't assign value at first index{0} than it print garbage value

	// 	// node n1("new", 1, 1.0, 'n');
	// 	// n1.value();
	// 	cout << arr[0];

	// arr STL
	// array<int , 3> arr;  // {?, ?, ?}

	// array<int, 3> arr1={0};  // {0, 0, 0}

	// array<int, 3> arr2={1};  // {1, 0, 0}

	// arr STL fill method
	// array<int , 3> arr3;  // {?, ?, ?}
	// arr3.fill(4) ; // {4, 4, 4}

	// for(int i = 0; i<arr3.size(); i++) cout << arr3.at(i) << " ";

	// array<int, 5> arr = {1, 3, 4, 5, 6};
	// for (auto it = arr.begin(); it != arr.end(); it++) {
	// 	cout << *it << " ";
	// }

	// array<int, 5> arr = {1, 3, 4, 5, 6};
	// for (auto it = arr.begin(); it < arr.end(); it++) {
	// 	cout << *it << " ";
	// }

	// array<int, 5> arr = {1, 3, 4, 5, 6};
	// for (auto it = arr.rbegin(); it != arr.rend(); it++) {
	// 	cout << *it << " ";
	// }

	// array<int, 5> arr = {1, 3, 4, 5, 6};
	// for (auto it = arr.rbegin(); it < arr.rend(); it++) {
	// 	cout << *it << " ";
	// }

	// array<int, 5> arr = {1, 3, 4, 5, 6};
	// for (auto it = arr.end() -1 ; it >= arr.begin(); it--) {
	// 	cout << *it << " ";
	// }

	// for each loop like javascript
	// array<int, 5> arr = {1, 3, 4, 5, 6};

	// reverse(arr.rbegin(), arr.rend());
	// for(auto it: arr) cout << it << " ";

	// for loop with string
	// string s = "12345";
	// for(auto it : s) cout << it << " ";

	// int arr[4] = {1, 2, 3, 4};
	// for(auto it : arr) cout << it << " ";

	// int arr[4] = {1, 2, 3, 4};
	// array<int, 3> arr{1, 2, 3};
	// cout << arr.size() << " " << arr.front() << " " << arr.back();

	// VECTOR STL -----------------------------------------------------------
	//  list all the methods of vector

	// segmentation falut is when you puch back 10^7;
	// vector<int> v1; // {}
	// v1.push_back(1);
	// v1.push_back(2);
	// v1.push_back(4);

	// cout << v1.size() << " " << v1[v1.size() - 1] << endl;
	// v1.pop_back();
	// cout << v1.size() << " " << v1[v1.size() - 1] << endl;

	// // earase all the element at onece
	// v1.clear();
	// cout << v1.size() << endl;

	// vector<int> v1(4, 0); // {0, 0, 0, 0}
	// vector<int> v2(4, 10); // {10, 10, 10, 10}

	// // copy vector v2 into v3
	// vector<int> v3(v2.begin(), v2.end()); // [) {first element include but last element not incude}
	// vector<int> v3(v2);
	// for(auto it: v3) cout << it  << " ";

	// vector<int> v1; // {}
	// v1.emplace_back(1);
	// v1.emplace_back(2);
	// v1.emplace_back(4);
	// for(auto it: v1) cout << it  << " ";

	// vector<int> v1;
	// v1.push_back(1);
	// v1.push_back(2);
	// v1.push_back(3);

	// vector<int> v2(v1.begin(), v1.begin() + 2);
	// for(auto it: v2) cout << it  << " ";

	//  defining 2d array --------------..--
	// vector<vector<int>> v1(4, vector<int>(5, 0));

	//  take input in the 2d array using autokeyword in for loop
	//  take input of 2d vector using reference of vector
	// vector<vector<int>> v1(4, vector<int>(5, 0)); // take input using reference of vector
	// for (auto &it : v1)
	// {
	// 	for (auto &it1 : it)
	// 	{
	// 		cin >> it1;
	// 	}
	// }
	// //  auto &it  : v1 // it is reference of vector
	// for (auto &it : v1)
	// {
	// 	for (auto &it1 : it)
	// 	{
	// 		cout << it1 << " ";
	// 	}
	// 	cout << endl;
	// }

	// for (auto it : v1)
	// {
	// 	for (auto it1 : it)
	// 	{
	// 		cout << it1 << " ";
	// 	}
	// 	cout << endl;
	// }

	//  another way to take input of 2d vector
	// for(int i = 0; i < v1.size(); i++)
	// {
	// 	for(int j = 0; j < v1[i].size(); j++)
	// 	{
	// 		cin >> v1[i][j];
	// 	}
	// }

	// for(int i = 0; i < v1.size(); i++)
	// {
	// 	for(int j = 0; j < v1[i].size(); j++)
	// 	{
	// 		cout << v1[i][j] << " ";
	// 	}
	// 	cout << endl;
	// }

	// another way to take input of 2d vector
	// vector<vector<int>> v1;
	// for (int i = 0; i < 4; i++)
	// {
	// 	vector<int> v2;
	// 	for (int j = 0; j < 5; j++)
	// 	{
	// 		int x;
	// 		cin >> x;
	// 		v2.push_back(x);
	// 	}
	// 	v1.push_back(v2);
	// }

	// for (auto it : v1)
	// {
	// 	for (auto it1 : it)
	// 	{
	// 		cout << it1 << " ";
	// 	}
	// 	cout << endl;
	// }

	//  -----------------------------------------------
	// vector<vector<int>> v1;
	// vector<int> v2;
	// v2.push_back(1);
	// v2.push_back(2);
	// v2.push_back(3);

	// vector<int> v3;
	// v3.push_back(4);
	// v3.push_back(5);
	// v3.push_back(6);

	// v1.push_back(v2);
	// v1.push_back(v3);

	// // it is vector it self
	// for (auto vect : v1)
	// {
	// 	for (auto it1 : vect)
	// 	{
	// 		cout << it1 << " ";
	// 	}
	// 	cout << endl;
	// }

	// for (int i = 0; i < v1.size(); i++)
	// {
	// 	for (int j = 0; j < v1[i].size(); j++)
	// 	{
	// 		cout << v1[i][j] << " ";
	// 	}
	// 	cout << endl;
	// }

	// vector<int> v4 = {1, 1, 3, 2, 2, 1}; // calculate the uniQUE element
	// //  calculate unique element of vector without sorting and set
	// for (int i = 0; i < v4.size(); i++)
	// {
	// 	for (int j = i + 1; j < v4.size(); j++)
	// 	{
	// 		if (v4[i] == v4[j])
	// 		{
	// 			v4.erase(v4.begin() + j);
	// 			j--;
	// 		}
	// 	}
	// }

	// for (auto it : v4)
	// 	cout << it << " ";

	// calculate unique element of vector without set and without sorting ==========================
	// vector<int> v4 = {1, 1, 3, 2, 2, 1}; // calculate the uniQUE element

	// set<int> s;
	// for (int i = 0; i < v4.size(); i++)
	// {
	// 	s.insert(v4[i]);
	// }

	// for (auto it : s)
	// 	cout << it << " ";

	// calculate unique element of vector without set and with sorting ==========================
	// vector<int> v4 = {1, 1, 3, 2, 2, 1}; // calculate the uniQUE element

	// sort(v4.begin(), v4.end());

	// for (int i = 0; i < v4.size(); i++)
	// {
	// 	if (v4[i] != v4[i + 1])
	// 		cout << v4[i] << " ";
	// }

	// 10 * 20 (2d array)

	// vector<vector<int>> v4(10 , vector<int> (20, 0));
	// for(auto vect : v4){
	// 	for(auto it : vect){
	// 		cout << it << " ";
	// 	}
	// 	cout << endl;
	// }

	// 10 * 20 * 30

	// vector<vector<vector<int>>> v4(10, vector<vector<int>> (20 , vector<int> (30, 0)));
	// for(auto vect1 : v4){
	// 	for(auto vect2 : vect1){
	// 		for(auto it: vect2) {
	// 			cout << it << " ";
	// 		}
	// 		cout << endl;
	// 	}
	// 	cout << endl;
	// }
	// int n;
	// cin >> n;
	// map<int, int> mp;
	// int mx = 0;
	// for(int i = 0; i<n; i++) {
	// 	int x;
	// 	cin >> x;
	// 	mp[x]++;
	// 	cout << mp[x] << " ";
	// 	if(mp[x] > mp[mx]){
	// 		mx = x;
	// 	}
	// }
}