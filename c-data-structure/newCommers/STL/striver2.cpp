#include <bits/stdc++.h>
using namespace std;

int main() {
	// given n elements, tell me the number of unique elements
	int arr[] = {2, 5, 2, 1, 5}; // 3 unique elements -> {1. 2. 5}

	// set<int> st;
	// int n;
	// cin >> n;

	// for (int i = 0; i < n; i++) {
	// 	int x;
	// 	cin >> x;
	// 	st.insert(x);
	// }

	// cout << st.size() << endl ;
	// for (auto it : st) cout << it << " ";
	// // st.erase(st.begin());  // st -> {2, 5}
	// // cout << endl;
	// 	auto it = st.begin();
	// st.erase(it,  st.find(2)); // st -> {2, 5}
	// cout << endl;
	// for (auto it : st) cout << it << " ";

// ====================================================================
	// set<int> st = {1, 5, 7, 8};
	// auto it = st.find(5);
	// cout << *it << endl ;
	// cout << *st.find(8) << endl;
	// Initialize set

// =====================================================================

	// set<int> s;

	// s.insert(1);
	// s.insert(4);
	// s.insert(2);
	// s.insert(5);
	// s.insert(3);

	// // finding position of 6
	// auto pos = s.find(5);

	// // print element if it is present in set
	// if(pos != s.end())
	// 	cout << "Element found at position : "<< *pos;
	// else
	// 	cout << "Element not present in set";

	//==============================================================

	// set<int> s;
	// s.emplace(5);
	// s.emplace(3);
	// s.emplace(4);

	// for(auto it : s) cout << it << " ";

	set<int> s;
	s.insert(4);
	s.insert(3);
	// cout << s.size() << endl;

	s.erase(s.begin(), s.end());
	// delete entire  set
	// if(s.empty()) cout << "set s is empty" ;  // it make sure entire set is delete
	// for(auto it = s.begin() ; it!=s.end(); it++) cout << *it << " ";

//  =======================================================================
	// unorder_set

	// in the multiset elment is not in the sorted order(but i set all the element  in the sorted order this is only diffrence between the set and unordered set)
	unordered_set<int> st;
	st.emplace(1);
	st.emplace(2);
	st.emplace(3);

	// avarage time complexity is O(1);
	//  if tle => than switch to set
	// worst time complexity is O(n);

	//  all the function(methods) are same as set

//  =========================================================================
	// multiset

	multiset<int> ms;

	ms.insert(1);
	ms.insert(1);
	ms.insert(1);
	ms.insert(2);
	ms.insert(2);

	// ms.erase(2); // all the instance will be erased

	// auto it = ms.find(2); // return the iterator pointing to the first element of 2
	// cout << *it << endl ;

	// ms.clear(); // it make sure to remove all the element from the multiset
	// time coplexity (log n) in size

	// for(auto it : ms) cout << it << " ";
	ms.erase(ms.find(2), ++ms.find(2));
	// for(auto it = ms.begin(); it != ms.end(); it++) cout << *it << " " ;
	// cout << endl;

// find how many times 2 occures
	// cout << "count of 2 is =  "<< ms.count(2);


// =====================================================================
	//  MAP ------------------------>

	//  key - value paire
	//  raj -> 27
	//  mukesh -> 21
	// sandeep -> 67
	//  take -> 3;

	// map only store unique keys
	// (logn)  is the (time complexity) of (map)

	map<string, int > mpp;
	mpp["raj"] = 27;
	mpp["mukesh"] = 21;
	mpp["sandeep"] = 67;
	mpp["hima"] = 31;
	mpp["parveer"] = 67;
	mpp["tank"] = 3;

	mpp.emplace("raj", 67);
	// mpp.erase('raj');
	// mpp.erase(mpp.begin());
	// mpp.clear();
	if (mpp.empty()) {
		cout << "Yes it is empty";
	}
	// for(auto it : mpp) cout << it.first << " : " << it.second <<  endl;.

	// for (auto it = mpp.begin(); it  != mpp.end(); it++)
	// cout << it->first << " : " << it->second << endl;

// ==============================================================
	//  unordered map
	//  does not store in any order
	// O(1) in almost all the cases
	// O(n) in worst cases , where n is the container size

	//  all the methods are same as map funcitons
//  =======================================================
	// multimap
	mpp.emplace("raj", 2);
	mpp.emplace("raj", 5);
//  ==================================================

	// Pair class
	pair<int , int> pr = {1, 2};
	// cout << "{" << pr.first << "," << pr.second << "}" << endl  ;

	pair<pair<int, int>, int> pr1 = {{1, 2}, 1};
	// cout << pr1.first.second << endl;

	pair<pair<int, int>, pair<int, int>> pr2 = {{1, 2}, {3, 4}};
	// cout << pr2.second.second << endl;

	// vector<pair<int,int>> vec;
	// vec.push_back({1, 2});
	// vec.push_back({3, 4});
	// for(auto it : vec){
	// 	cout << it.first << " " << it.second << endl;
	// }


	set<pair<int, int>> sp = {{1, 2}, {1, 2}, {3, 4}, {0, 1}};

	// s.insert({1, 2});
	// s.insert({1, 2});
	// s.insert({3, 4});
	// s.insert({0, 1});

	// for(auto it : sp) cout << it.first << " " << it.second << endl;

	map<pair<int, int>, int> mp;



// ================================================================
	// stack and Queue  // lifo ds

	// pop
	// top
	// size
	// empty
	// push and emplace

	stack<int> sta;
	sta.push(1);
	sta.push(2);
	sta.push(3);
	sta.push(4);
	// cout << sta.top();

	// while(!sta.empty()){
	// 	cout << sta.top() << " ";
	// 	sta.pop();
	// }

	// for(auto it = sta; !it.empty(); it.pop()) cout << it.top() << " ";

	// delete stack
	bool flag = sta.empty(); // returns true if stack is empty, or false

	// deleted the entire stack
	while (!sta.empty()) {
		sta.pop();
	}

	// cout << st.size() << endl; // number of elements in the stack

	// stack<int> st;
	// // throw error because not the single element is present inside the stack
	// if(!st.empty()) {
	// 	cout << st.top() << endl; // throw error
	// }



	// =============================================================
	// queue  fifo operations ds
	// push
	// front
	// pop
	// size
	// empty

	// queue<int> q;
	// q.push(1);
	// q.push(5);
	// q.push(3);
	// q.push(6);

	// cout << q.front() << endl;; // prints 1
	// q.pop();
	// cout << q.front(); // prints 5

	// linear time
	// while (!q.empty()) {
	// 	q.pop();
	// }

	queue<int> q;
	for (int i = 0; i < 10; i++) q.push(i);

	// for(auto i = q; !i.empty(); i.pop()) cout << i.front() << " " ;

	while (!q.empty()) {
		// cout << q.front() << " ";
		q.pop();
	}


//  ================================================================
	// priority_queue // store all in sorted order (decending order)
	// push
	// size
	// top pop empty

	// priority_queue<int> pq;
	// pq.push(1);
	// pq.push(3);
	// pq.push(11);
	// pq.push(4);

	// cout << pq.top() ;

	// while (!pq.empty()) {
	// 	cout << pq.top() << " ";  // {11, 4, 3, 1}
	// 	pq.pop();
	// }

	priority_queue<pair<int , int>> pq;
	pq.push({1, 2});
	pq.push({11, 2});	
	pq.push({22, 2});	
	pq.push({-1, 2});

	// while(!pq.empty()) {
	// 	cout << pq.top().first << " " << pq.top().second << endl;
	// 	pq.pop();
	// }	


	// ======================================================
	dequeue<int> dq; 
	// push_front() 
	// push_back() 
	// pop_front() 
	// pop_back()
	// begin, end, rbegin, rend 
	// size 
	// clear
	// empty 
	// at 

	//  =======================================================

	list<int> ls; 
	// push_front() 
	// push_back() 
	// pop_front() 
	// pop_back()
	// begin, end, rbegin, rend 
	// size 
	// clear
	// empty 
	// at 
	// remove -> O(1) 
	ls.push_front(1); 
	ls.push_front(2); 
	ls.push_front(3);
	ls.remove(2); //-> // o(1) operation 


	// ==============================================================
		// given N elements, print the elements that occurs maximum 
	// number of times 
	// input 
	// 5 
	// 1 3 3 3 2 
 
	// output 
	// 3
 
 
	int n;
	cin >> n; 
	map<int,int> mpp; 
	int maxi = 0; 
	for(int i = 0;i<n;i++) {
		int x;
		cin >> x;
		mpp[x]++; 
		if(mpp[x] > mpp[maxi]) {
			maxi = x; 
		}
	}
	cout << x << endl; 



	// ==================================================

	// given N elements, print all elements in sorted order 
	// input 
	// n = 6 
	/// 6 6 3 2 3 5 
 
	// output 
	// 2 3 3 5 6 6 
 
	int n;
	cin >> n;
	multiset<int> ms; 
	for(int i=0;i<n;i++) {
		int x;
		cin >> x; 
		ms.insert(x); 
	}
 
	for(auto it : ms) {
		cout << it << endl; 
	}
 
 
 




}

