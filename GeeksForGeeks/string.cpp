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


//////////////////////////////////////////////////////////

void solve_freq() {
	int count[26] = {0};
	string str = "geeksforgeeks";

	for (int i = 0; i < (int)str.length(); i++)
		count[str[i] - 'a']++;

	for (int i = 0; i < 26; i++) {
		if (count[i] > 0)
			cout << (char)(i + 'a') << " " << count[i] << endl;
	}
}

////////////////////////////////////////////


bool pali() {
	string str = "mukamkum";
	string temp = str;
	int n = str.length();
	int st = 0, end = n - 1;
	while (st < end) {
		if (str[st] != str[end]) return false;
		st++, end--;
	}
	return true;
}


// string is subsequnce of given string or not
bool isSubString(string mainStr, string str, int m , int n) {
	if (m < n) return false;
	int i = 0, j = 0;
	while ((i < m) && (j < n)) {
		if (mainStr[i] == str[j]) j++;
		i++;
	}
	return (j == n);
}

bool isSubString1(string mainStr, string str, int m , int n) {
	if (m < n) return false;
	int j = 0;
	for (int i = 0; i < m && j < n; i++)
		if (mainStr[i] == str[j]) j++;
	return (j == n);
}

// recursive solution for subString
bool isSubString2(string mainStr, string str, int m, int n) {
	if (m < n) return false;
	if (m == 0) return true;
	if (n == 0) return false;

	if (mainStr[m - 1] == str[n - 1])
		return isSubString2(mainStr, str, m - 1, n - 1);
	else return isSubString2(mainStr, str, m - 1, n);
}
void solve_subString() {
	string mainStr = "ABCDEF";
	string str = "ADE";
	int m = mainStr.length();
	int n = str.length();
	// if (isSubString(mainStr, str, m , n)) cout << " this is isSubstring";
	// else cout << " this is not isSubstring " << nl;
	// if (isSubString1(mainStr, str, m , n)) cout << " this is substring";
	// else cout << " this is not substring " << nl;


	if (isSubString2(mainStr, str, m , n)) cout << " this is substring";
	else cout << " this is not substring " << nl;

}


// if both string are anagrames
bool anagrames(string s1, string s2) {
	if (s1.length() != s2.length()) return false;
	sort(s1.begin(), s1.end());
	sort(s2.begin(), s2.end());
	return s1 == s2;
}


bool anagrames1(string s1, string s2) {
	if (s1.length() != s2.length()) return false;
	int count[256] = {0};

	for (int i = 0; i < (int)s1.length(); i++) {
		count[s1[i]]++;
		count[s2[i]]--;
	}

	for (int i = 0; i < 256; i++)
		if (count[i] != 0) return false;
	return true;
}
void solve_anagrames() {
	string s1 = "aabca";
	string s2 = "caaba";

	// if (anagrames(s1, s2)) cout << " string are anagrames";
	// else cout << " not anagrames";

	if (anagrames1(s1, s2)) cout << " string are anagrames";
	else cout << " not anagrames";
}
/////////////////////////////////////////////////////
// left most character repeat return that character first index
int repeat_leftMost(string str) {
	for (int i = 0; i < (int)str.length(); i++)
		for (int j = i + 1; j < (int)str.length(); j++)
			if (str[i] == str[j]) return i;
	return -1;
}

int repeat_leftMost1(string str) {
	int count[256] = {0};

	for (int i = 0; i < (int)str.length(); i++)
		// count[(int)str[i]]++;
		count[str[i]]++;

	for (int i = 0; i < (int)str.length(); i++)
		// if(count[(int)str[i]] > 1) return i;
		if (count[str[i]] > 1) return i;

	return -1;
}

int repeat_leftMost2(string str) {
	int fIndex[256];

	fill(fIndex, fIndex + 256, -1);
	int res = INT_MAX;
	for (int i = 0; i < (int)str.length(); i++) {
		int fi = fIndex[str[i]];
		debug(fi);
		if (fi == -1) fIndex[str[i]] = i;
		else res = min(res, fi);
		debug(res);
	}
	return (res == INT_MAX) ? -1 : res;
}

int repeat_leftMost3(string str) {
	bool visited[256];

	fill(visited, visited + 256, false);

	int res = -1;

	for (int i = (int)str.length() - 1 ; i >= 0; i--) {
		if (visited[str[i]])
			res = i;
		else visited[str[i]] = true;
	}

	return res;
}
void solve_repeat_leftMost() {
	string str = "cabbad";
	// cout << repeat_leftMost(str);
	// cout << repeat_leftMost1(str);
	// cout << repeat_leftMost2(str);
	cout << repeat_leftMost3(str);

}

/////////////////////////////////////////////////////////////////////
// find the index of leftmost non repeating character
int non_repeat_leftMost(string str) {
	for (int i = 0; i < (int)str.length(); i++) {
		bool flag = false;
		for (int j = 0; j < (int)str.length(); j++) {
			if (i != j && str[i] == str[j]) {
				flag = true;
				break;
			}
		}
		if (flag == false) return i;
	}
	return -1;
}

int non_repeat_leftMost1(string str) {
	int count[256] = {0};
	for (int i = 0; i < (int)str.length(); i++)
		count[str[i]]++;

	for (int i = 0; i < (int)str.length(); i++)
		if (count[str[i]] == 1)
			return i;
	return -1;
}

int non_repeat_leftMost2(string str) {
	int FI[256];
	fill(FI, FI + 256, -1);

	for (int i = 0; i < (int)str.length(); i++) {
		if (FI[str[i]] == -1)
			FI[str[i]] = i;
		else
			FI[str[i]] = -2;
	}

	int res = INT_MAX;
	for (int i = 0; i < 256; i++)
		if (FI[i] >= 0)
			res = min(res, FI[i]);

	return (res == INT_MAX) ? -1 : res;
}

void solve_non_repeat_leftMost() {
	string str = "cabbad";
	cout << non_repeat_leftMost(str) << nl;
	cout << non_repeat_leftMost1(str) << nl;
	cout << non_repeat_leftMost2(str) << nl;

}


// /////////////////////////////////////////////////
// reverseWords
void reverse(char str[], int low, int high) {
	while (low <= high) swap(str[low++], str[high--]);
}
void reverseWord(char str[], int n) {
	int start = 0;
	for (int end = 0; end < n ; end++) {
		if (str[end] == ' ') {
			reverse(str, start , end - 1);
			start = end + 1;
		}
	}
	reverse(str, start , n - 1);
	reverse(str, 0, n - 1);
}

void solve_reverseWord() {
	string s = "my name is mukesh";
	int n = s.length();
	char str[n];
	strcpy(str, s.c_str());
	reverseWord(str, n);
	for (int i = 0; i < n ; i++) cout << str[i] ;

}


/////////////////////////////////////////
// Overiew of pattren searching
// m => pattren length
// n => text length

// preprocesser pattren =>
// 1 : naive = O((n - m + 1) * m)
// 2 : naive when all the character of pattren are distinct : O(n)

// not preprocessing pattren =>
// 3 : Rabin Karp : O((n - m + 1) * m)
// 4 : KMP : O(n)

// preprocess Text
// 5 : suffix Trie : O(m)


//////////////////////////////////////////
// naive pattren searching algo
void patternSearching_naive_algo(string &txt, string &pat) {
	// TC O((n - m + 1) * m)
	int m = pat.length();
	int n = txt.length();

	for (int i = 0; i <= n - m; i++) {
		int j;
		for (j = 0; j < m; j++)
			if (pat[j] != txt[i + j]) break;
		if (j == m) cout << i << " ";
	}
}

void solve_pattrenSearching_naive_algo() {
	// string txt = "ABCABCD";
	// string pat = "ABCD";
	string txt = "AAAAAA";
	string pat = "AAA";
	patternSearching_naive_algo(txt, pat);
}


////////////////////////////////
// improve naive algo for distinct in the pattren
void patternSearching_naiveImprove_algo(string &txt, string &pat) {
	int n = txt.length();
	int m = pat.length();
	for (int i = 0; i <= n - m;) {
		int j;
		for (j = 0; j < m ; j++)
			if (pat[j] != txt[i + j]) break;
		if (j == m) cout << i << " ";
		if (j == 0) i++;
		else i = i + j;
	}
}

void solve_pattrenSearching_naiveImprove_algo() {
	string txt = "ABCABCD";
	string pat = "ABCD";

	patternSearching_naiveImprove_algo(txt, pat);
}

//////////////////////////////////
// rabin karp Algorithem
void pattrenSearching_rabinKarp_Algo(string pat, string txt, int M, int N) {
	int d = 256;
	const int  q = 101;

//Compute (d^(M-1))%q
	int h = 1;
	for (int i = 1; i <= M - 1; i++)
		h = (h * d) % q;

	//Compute p and to
	int p = 0, t = 0;
	for (int i = 0; i < M; i++) {
		p = (p * d + pat[i]) % q;
		t = (t * d + txt[i]) % q;
	}

	for (int i = 0; i <= (N - M); i++) {
		//Check for hit
		if (p == t) {
			bool flag = true;
			for (int j = 0; j < M; j++)
				if (txt[i + j] != pat[j]) {flag = false; break;}
			if (flag == true)cout << i << " ";
		}
		//Compute ti+1 using ti
		if (i < N - M) {
			t = ((d * (t - txt[i] * h)) + txt[i + M]) % q;
			if (t < 0)t = t + q;
		}
	}

}
void solve_pattrenSearching_rabinKarp_Algo() {
	string txt = "GEEKS FOR GEEKS";
	string pat = "GEEK";
	int M = pat.length();
	int N = txt.length();
	pattrenSearching_rabinKarp_Algo(pat, txt, M, N);
}

int main() {
	debug_code();
	init_code();

	// solve_freq();
	// if (pali()) cout << "palidrime" << nl;
	// else cout << " not palidrome " << nl;
	// solve_subString();
	// solve_anagrames() ;
	// solve_repeat_leftMost();
	// solve_non_repeat_leftMost();
	// solve_reverseWord();
	// solve_pattrenSearching_naiveImprove_algo();
	solve_pattrenSearching_rabinKarp_Algo();
	/*a
	a a
	a a a ..................
	a b
	a b b ..................
	a c
	a c c ........................*/
	return 0;
}

