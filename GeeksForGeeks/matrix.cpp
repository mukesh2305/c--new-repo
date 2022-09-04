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

//////////////////////////////////////////////////////////////////////////////////
// void print_mat(int mat[3][2]) {
// 	for(int i = 0; i < 3 ; i++) {
// 		for(int j = 0; j < 2; j++) cout << mat[i][j] << " ";
// 		cout << endl;
// 	}
// }

// void print_mat(int **mat, int m) {
// 	for(int i = 0; i < m; i++) {
// 		for(int j = 0; j < 2; j++) cout << mat[i][j] << " ";
// 		cout << endl;
// 	}
// }

// void print_mat(vector<vector<int>> & arr) {
// 	for(auto it : arr) {
// 		for(auto vec : it) cout << vec << " ";
// 		cout << endl;
// 	}
// }
///////////////////////////////////////////
// print the matrix in snak pattren
void print_snake_mat(vector<vector<int>> &mat) {
	for (int i = 0; i < (int)mat.size(); i++) {
		if (i % 2 == 0) {
			for (int j = 0; j < (int)mat[i].size(); j++)
				cout << mat[i][j] << " ";
		} else {
			for (int j = (int)mat[i].size() - 1; j >= 0; j--)
				cout << mat[i][j] << " ";
		}
		cout << endl;
	}
}

void solve_snake_mat() {
	vector<vector<int>> mat = {
		{1, 2, 3, 4},
		{5, 6, 7, 8},
		{9, 10, 11, 12},
		{13, 14, 15, 16}
	};
	print_snake_mat(mat);
}


////////////////////////////////////
// print bounded bountries TC : o(N)

void bounded_bountry(int mat[4][4], int r, int c) {
	if (r == 1) {
		for (int i = 0; i < c; i++) cout << mat[0][i] << " ";
		return;
	}
	if (c == 1) {
		for (int i = 0; i < r; i++) cout << mat[i][0] << " ";
		return;
	}
	for (int i = 0; i < c; i++) cout << mat[0][i] << " ";
	for (int i = 1; i < r; i++) cout << mat[i][c - 1] << " ";
	for (int i = c - 2; i >= 0; i--) cout << mat[r - 1][i] << " ";
	for (int i = r - 2; i >= 1; i--) cout << mat[i][0] << " ";
}

void solve_bounded_bountry() {
	int r = 4  , c = 4;
	int mat[4][4] = {
		{1, 2, 3, 4},
		{5, 6, 7, 8},
		{9, 10, 11, 12},
		{13, 14, 15, 16}
	};

	bounded_bountry(mat, r, c);
}


/////////////////////////////////////////////
// transpose of matrix
void transpose(int mat[4][4], int r, int c) {
	int temp[r][c];
	for (int i = 0 ; i < r; i++)
		for (int j = 0; j < c; j++)
			temp[i][j] = mat[j][i];
	for (int i = 0 ; i < r; i++)
		for (int j = 0; j < c; j++)
			mat[i][j] = temp[i][j];
}

void transpose1(int mat[4][4], int r , int c) {
	for (int i = 0; i < r; i++)
		for (int j = i + 1; j < c; j++)
			swap(mat[i][j], mat[j][i]);
}


void solve_transpose() {
	int r = 4  , c = 4;
	int mat[4][4] = {
		{1, 2, 3, 4},
		{5, 6, 7, 8},
		{9, 10, 11, 12},
		{13, 14, 15, 16}
	};
	// transpose(mat, r, c);
	transpose1(mat, r , c);
	for (int i = 0; i < r ; i++) {
		for (int j = 0 ; j < c; j++)
			cout << mat[i][j] << " ";
		cout << endl ;
	}
}
////////////////////////////////////////////////////////////
//  rotate matrix by 90deg
void rotate90(int mat[4][4], int r, int c) {
	int temp[r][c];
	for (int i = 0; i < r ; i++) {
		for (int j = 0; j < c; j++) {
			temp[c - j - 1][i] = mat[i][j];
		}
	}

	for (int i = 0; i < r; i++) {
		for (int j = 0 ; j < c; j++) {
			mat[i][j] = temp[i][j];
		}
	}
}

// optimal method
void rotate901(int mat[4][4], int r, int c) {
	for (int i = 0; i < r; i++)
		for (int j = i + 1; j < c; j++)
			swap(mat[i][j], mat[j][i]);

	for (int i = 0; i < r ; i++) {
		int low = 0; int high = r - 1;
		while (low < high) {
			swap(mat[low++][i], mat[high--][i]);
		}
	}
}

void solve_rotate90() {
	int r = 4  , c = 4;
	int mat[4][4] = {
		{1, 2, 3, 4},
		{5, 6, 7, 8},
		{9, 10, 11, 12},
		{13, 14, 15, 16}
	};
	// rotate90(mat, r, c);
	rotate901(mat, r, c);
	for (int i = 0 ; i < r ; i++) {
		for (int j = 0 ; j < c ; j++) {
			cout << mat[i][j] << " ";
		}
		cout << endl;
	}
}

////////////////////////////////////////////////////////
//  print matrix in sprial order
void print_sprial(int mat[4][4], int r, int c) {
	int top = 0, left = 0, bottom = r - 1, right = c - 1;
	while (top <= bottom && left <= right) {
		// TOP ROW PRINT
		for (int i = left ; i <= right; i++) {
			cout << mat[top][i] << " ";
		}
		top++;

		// RIGHT COLUMN
		for (int i = top; i <= bottom ; i++) {
			cout << mat[i][right] << " ";
		}
		right--;

		// BOTTOM ROW (Reverse Order)
		if (top <= bottom) {
			for (int i = right ; i >= left ; i--) {
				cout << mat[bottom][i] << " ";
			}
			bottom--;
		}

		// LEFT COLUMN (REVERSE ORDER)
		if (left <= right) {
			for (int i = bottom ; i >= top; i--) {
				cout << mat[i][left] << " ";
			}
			left++;
		}
	}
}


/////////////////////////////////////////////////////////
// search element in the sorted matrix

void search_ele(int mat[4][4], int r, int c, int x) {
	for (int i = 0; i < r ; i++) {
		for (int j = 0; j < c ; j++) {
			if (mat[i][j] == x) {
				cout << "present at " << "(" << i << " , " << j << " ) " << endl;
				return;
			}
		}
	}
	cout << " not found " << endl;
}

// efficient approach
void search_ele1(int mat[4][4], int r , int c , int x) {
	int i = 0, j = c - 1;
	while (i < r && j >= 0) {
		if (mat[i][j] == x ) {
			cout << "present at " << "(" << i << " , " << j << " ) " << endl;
			return;
		} else if (mat[i][j] > x) {
			j--;
		} else i++;
	}
	cout << " Not Found " << endl;
}

void solve_search_ele() {
	int r = 4  , c = 4;
	int mat[4][4] = {
		{1, 2, 3, 4},
		{5, 6, 7, 8},
		{9, 10, 11, 12},
		{13, 14, 15, 16}
	};
	int x = 5;
	// search_ele(mat, r , c , x);
	search_ele1(mat, r , c , x);
}

/////////////////////////////////////////////////////
// median of row wise sorted matrix
// naive approach
int median_ele(int mat[3][3], int r, int c) {
	int arr[r * c];
	int k = 0;
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c ; j++) {
			arr[k++] = mat[i][j];
		}
	}

	sort(arr, arr + (r * c));
	int md = (r * c ) / 2;
	return arr[md];
}

// Efficent approach
int median_ele1(int mat[3][3], int r, int c) {
	int min = mat[0][0],  max = mat[0][c - 1];

	for (int i = 1; i < r ; i++) {
		if (min > mat[i][0]) min = mat[i][0];
		if (max < mat[i][c - 1]) max = mat[i][c - 1];
	}

	int medPos = (r * c + 1) / 2;
	while (min < max) {
		int mid = (min + max) / 2;

		int midPos = 0;
		for (int i = 0 ; i < r ; i++) {
			midPos += upper_bound(mat[i], mat[i] + c, mid) - mat[i];
		}
		if (midPos < medPos) min = mid + 1;
		else max = mid;
	}

	return min;
}

void solve_median() {
	int r = 3, c = 3;
	int mat[3][3] = {
		{1, 10, 20},
		{15, 25, 30},
		{5, 8, 40}
	};

	// cout << median_ele(mat, r, c);
	cout << median_ele(mat, r, c);
 }

int main() {
	debug_code();
	init_code();

	// int a[3][2] = {
	// 	{10, 20},
	// 	{30, 40},
	// 	{50, 60}
	// };

	// // for(auto &it : a) {
	// // 	for(auto &it1 : it) cout << it1 << " ";
	// // 	nline;
	// // }

	// int m = sizeof(a[0]) / sizeof(a[0][0]);
	// for (int i = 0; i < n ; i++) {
	// 	for (int j = 0 ; j < m ; j++) {
	// 		cout << a[i][j] << " ";
	// 	}
	// 	nline;
	// }


	//1st method :  create 2d array m * n using dynamic array ;
	// int m = 3 , n = 2;
	// int **arr;
	// arr = new int*[m];
	// for(int i = 0; i < m; i++) {
	// 	arr[i] = new int[n];
	// }

	// for(int i = 0; i < m ; i++) {
	// 	for(int j = 0; j < n; j++) {
	// 		arr[i][j] = 10;
	// 	}
	// }

	// for(int i = 0; i < m ; i++) {
	// 	for(int j = 0; j < n ; j++) {
	// 		cout << arr[i][j] << " ";
	// 	}
	// 	cout << endl;
	// }


	// 2nd method :
	// int m = 3 , n = 2;
	// int *arr[m];
	// for(int i = 0; i < m ; i++) {
	// 	arr[i] = new int[n];
	// }
	// for(int i = 0; i < m ; i++) {
	// 	for(int j = 0; j < n; j++) {
	// 		arr[i][j] = 10;
	// 	}
	// }

	// for(int i = 0; i < m ; i++) {
	// 	for(int j = 0; j < n ; j++) {
	// 		cout << arr[i][j] << " ";
	// 	}
	// 	cout << endl;
	// }


	// 3rd method : // array of vector
	// int m = 3 , n = 2;
	// vector<int> arr[m];

	// for(int i = 0; i < m ; i++) {
	// 	for(int j = 0 ; j < n ; j++) {
	// 		arr[i].push_back(50);
	// 	}
	// }

	// for(auto it : arr) {
	// 	for(auto it1 : it) cout << it1 << " ";
	// 	cout << endl;
	// }

	// 4th method : // vector of vector
	// int m = 3 , n = 2 ;
	// vector<vector<int>> arr;
	// for(int i = 0; i < m ; i++) {
	// 	vector<int> v;
	// 	for(int j = 0 ; j < n ; j++) {
	// 		v.push_back(20);
	// 	}
	// 	arr.push_back(v);
	// }

	// for(auto v : arr) {
	// 	for(auto it : v) cout << it << " ";
	// 	cout << endl;
	// }

	// ///////////////////////////////////////////////////
	//  passing 2d array as arguments
	// int mat[3][2] = {
	// 	{10, 20}, {30, 40}, {50, 60}
	// };
	// int m = 3 ;
	// print_mat(mat,m);

	// int **arr;
	// int m = 3, n = 2;
	// arr = new int*[m];
	// for(int i = 0; i < m ; i++) {
	// 	arr[i] = new int[n];
	// 	for(int j = 0; j < n ; j++) {
	// 		arr[i][j] = i;
	// 		// cout << arr[i][j] << " ";		}
	// 	}
	// }

	// print_mat(arr,m );
	// int m = 3 , n = 2;
	// vector<int> arr[m];
	// for(int i = 0 ; i < m ; i++) {
	// 	for(int j = 0; j < n ; j++) {
	// 		arr[i].push_back(i);
	// 	}
	// }
	// print_mat(arr, m);




	/////////////////////////
	// int m = 3 , n = 2;
	// vector<vector<int>> arr;
	// for (int i = 0; i < m ; i++) {
	// 	vector<int> v ;
	// 	for (int j = 0; j < n ; j++) {
	// 		v.push_back(i);
	// 	}
	// 	arr.push_back(v);
	// }

	// print_mat(arr);
	// solve_snake_mat() ;
	// solve_bounded_bountry();
	// solve_transpose() ;
	// solve_rotate90();
	// solve_search_ele();
	solve_median();
	return 0;
}