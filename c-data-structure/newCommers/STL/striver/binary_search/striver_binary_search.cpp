#include <bits/stdc++.h>
using namespace std;

int binaryFunc(vector<int> &v, int x, int l, int r)
{
    // binary search only works for sorted array
    // complexity: O(log(n))
    // iterative binary search
    while (l <= r)
    {
        int m = l + (r - l) / 2;
        if (v[m] == x)
            return m;
        else if (v[m] < x)
            l = m + 1;
        else
            r = m - 1;
    }
    return -1;
}
int recursive_binary_search(vector<int> &v, int x, int l, int r)
{
    // recursive binary search
    // complexity: O(log(n))
    if (l > r)
        return -1;
    int m = l + (r - l) / 2;
    if (v[m] == x)
        return m;
    else if (v[m] < x)
        return recursive_binary_search(v, x, m + 1, r);
    else
        return recursive_binary_search(v, x, l, m - 1);
}

int binaryFirstOccurence(vector<int> &v, int x, int l, int r)
{
    // binary search only works for sorted array
    // complexity: O(log(n))
    // iterative binary search
    while (l <= r)
    {
        int m = l + (r - l) / 2;
        if (v[m] == x)
        {
            if (m == 0 || v[m - 1] != x)
                return m;
            else
                r = m - 1;
        }
        else if (v[m] < x)
            l = m + 1;
        else
            r = m - 1;
    }
    return -1;
}
int recursive_binary_search_first_occurence(vector<int> &v, int x, int l, int r)
{
    // recursive binary search
    // complexity: O(log(n))
    if (l > r)
        return -1;
    int m = l + (r - l) / 2;
    if (v[m] == x)
    {
        if (m == 0 || v[m - 1] != x)
            return m;
        else
            return recursive_binary_search_first_occurence(v, x, l, m - 1);
    }
    else if (v[m] < x)
        return recursive_binary_search_first_occurence(v, x, m + 1, r);
    else
        return recursive_binary_search_first_occurence(v, x, l, m - 1);
}
int binaryFirstOccurence1(vector<int> &v, int x, int l, int r)
{
    int ans = -1;
    while (l <= r)
    {
        int m = l + (r - l) / 2; // 1 2 3 4 6 6 
        if (v[m] == x)
        {
            ans = m;
            r = m - 1;
            continue;
        }
        if (v[m] < x)
            l = m + 1;
        else
            r = m - 1;
    }

    return ans;
}

int binaryLastOccurence1(vector<int> &v, int x, int l, int r)
{
    int ans = -1;
    while (l <= r)
    {
        int m = l + (r - l) / 2; // 1 2 3 4 6 6 
        if (v[m] == x)
        {
            ans = m;
            l = m + 1;
            continue;
        }
        if (v[m] < x)
            l = m + 1;
        else
            r = m - 1;
    }

    return ans;
}
int binaryLastOccurence(vector<int> &v, int x, int l, int r)
{
    // binary search only works for sorted array
    // complexity: O(log(n))
    // iterative binary search
    while (l <= r)
    {
        int m = l + (r - l) / 2;
        if (v[m] == x)
        {
            if (m == v.size() - 1 || v[m + 1] != x)
                return m;
            else
                l = m + 1;
        }
        else if (v[m] < x)
            l = m + 1;
        else
            r = m - 1;
    }
    return -1;
}
int recursive_binary_search_last_occurence(vector<int> &v, int x, int l, int r)
{
    // recursive binary search
    // complexity: O(log(n))
    if (l > r)
        return -1;
    int m = l + (r - l) / 2;
    if (v[m] == x)
    {
        if (m == v.size() - 1 || v[m + 1] != x)
            return m;
        else
            return recursive_binary_search_last_occurence(v, x, m + 1, r);
    }
    else if (v[m] < x)
        return recursive_binary_search_last_occurence(v, x, m + 1, r);
    else
        return recursive_binary_search_last_occurence(v, x, l, m - 1);
}

int linearFunc(vector<int> &v, int x, int n)
{
    //  complexity O(n)
    // linear search
    for (int i = 0; i < n; i++)
        if (v[i] == x)
            return i;
    return -1;
}
int recursive_lineat_search(vector<int> &v, int x, int st_index, int n)
{

    // recursive linear search same as recursive linear search first occurence
    // recursive linear search
    // complexity: O(n)
    if (st_index == n)
        return -1;
    if (v[st_index] == x)
        return st_index;
    return recursive_lineat_search(v, x, st_index + 1, n);
}
int recursive_lineat_search_last(vector<int> &v, int x, int n)
{
    // recursive linear search
    // complexity: O(n)
    if (n < 0)
        return -1;
    if (v[n] == x)
        return n;
    return recursive_lineat_search_last(v, x, n - 1);
}

int lower_bound_func(vector<int> &v, int x, int n)
{
    //  complexity O(log(n))
    // binary search
    int l = 0, r = n - 1;
    while (l <= r)
    {
        int m = l + (r - l) / 2;
        if (v[m] < x)
            l = m + 1;
        else
            r = m - 1;
    }
    return l;
}
int recursive_lower_bound(vector<int> &v, int x, int l, int r)
{
    // recursive binary search
    // complexity: O(log(n))
    if (l > r)
        return l;
    int m = l + (r - l) / 2;
    if (v[m] < x)
        return recursive_lower_bound(v, x, m + 1, r);
    else
        return recursive_lower_bound(v, x, l, m - 1);
}
int lower_bound_func_1(vector<int> &v, int x, int n)
{
    int ans = n + 1; // if lower bound is not found then it goes to the end of the array , last_index = n, end of the array = n
    int low = 0, high = n;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (v[mid] >= x)
        {
            ans = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return ans;
}
int recursive_lower_bound_ans(vector<int> &v, int x, int l, int r, int ans)
{
    // recursive binary search
    // complexity: O(log(n))

    if (l > r)
    {
        return ans;
    }
    int m = l + (r - l) / 2;
    if (v[m] >= x)
    {
        ans = m;
        return recursive_lower_bound_ans(v, x, l, m - 1, ans);
    }
    else
    {
        return recursive_lower_bound_ans(v, x, m + 1, r, ans);
    }
    // return ans;
}
// binary search recursive lower bound function with return ans variable

int upper_bound_func(vector<int> &v, int x, int n)
{
    //  complexity O(log(n))
    // binary search
    int l = 0, r = n - 1;
    while (l <= r)
    {
        int m = l + (r - l) / 2;
        if (v[m] <= x)
            l = m + 1;
        else
            r = m - 1;
    }
    return l;
}
int recursive_upper_bound(vector<int> &v, int x, int l, int r)
{
    // recursive binary search
    // complexity: O(log(n))
    if (l > r)
        return l;
    int m = l + (r - l) / 2;
    if (v[m] <= x)
        return recursive_upper_bound(v, x, m + 1, r);
    else
        return recursive_upper_bound(v, x, l, m - 1);
}
int upper_bound_func_1(vector<int> &v, int x, int n)
{
    int ans = n + 1; // if lower bound is not found then it goes to the end of the array , last_index = n, end of the array = n
    int low = 0, high = n;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (v[mid] <= x)
        {
            low = mid + 1;
        }
        else
        {
            ans = mid;
            high = mid - 1;
        }
    }
    return ans;
}

int recursive_upper_bound_ans(vector<int> &v, int x, int l, int r, int ans)
{
    // recursive binary search
    // complexity: O(log(n))

    if (l > r)
    {
        return ans;
    }
    int m = l + (r - l) / 2;
    if (v[m] <= x)
    {
        return recursive_upper_bound_ans(v, x, m + 1, r, ans);
    }
    else
    {
        ans = m;
        return recursive_upper_bound_ans(v, x, l, m - 1, ans);
    }
}

//  find nth root of a number using binary search
int nth_root(int x, int n)
{
    int low = 1, high = x;
    int ans = 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (pow(mid, n) <= x)
        {
            ans = mid;
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    return ans;
}

// sqrt_root function using binary search
int sqrt_func(int x)
{
    //  complexity O(log(n))
    // binary search
    int l = 0, r = x;
    while (l <= r)
    {
        int m = l + (r - l) / 2;
        if (m * m <= x)
            l = m + 1;
        else
            r = m - 1;
    }
    return l - 1;
}
int recursive_sqrt(int x, int l, int r)
{
    // recursive binary search
    // complexity: O(log(n))
    if (l > r)
        return l;
    int m = l + (r - l) / 2;
    if (m * m <= x)
        return recursive_sqrt(x, m + 1, r);
    else
        return recursive_sqrt(x, l, m - 1);
}

int sqrt_func_ans(int x)
{
    int low = 1, high = x;
    int ans = 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (mid * mid <= x)
        {
            ans = mid;
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    return ans;
}
int recursive_sqrt_func_ans(int x, int low, int high, int ans)
{

    if (low > high)
        return ans;
    int mid = low + (high - low) / 2;
    if (mid * mid <= x)
    {
        ans = mid;
        return sqrt_func_ans(x, mid + 1, high, ans);
    }
    else
    {
        return sqrt_func_ans(x, low, mid - 1, ans);
    }

    return ans;
}

// linear solution of find square root of a number
int sqrt_func_linear(int x)
{
    //  complexity O(n)
    int ans = 0;
    while (ans * ans <= x)
    {
        ans++;
    }
    return ans - 1;

    // for (int i = 0; i <= x; i++)
    // {
    //     if (i * i <= x)
    //     {
    //         ans = i;
    //     }
    //     else
    //         break;
    // }
}

int main()
{
    vector<int> v = {1, 2, 4, 4, 4, 4, 5, 6};
    int n = v.size();
    int key = 4;
    int low = 0;
    int high = n - 1;
    // cout << binaryFunc(v, key, low, high) << endl;
    // cout << binaryFirstOccurence(v, key, low, high) << endl;
    // cout << binaryFirstOccurence1(v, key, low, high) << endl;
    // cout << binaryLastOccurence(v, key, low, high) << endl;
    // cout << binaryLastOccurence1(v, key, low, high) << endl;
    // cout << recursive_binary_search_first_occurence(v, key, low, high) << endl;
    // cout << recursive_binary_search_last_occurence(v, key, low, high) << endl;

    // cout << recursive_lineat_search(v, key, low, high) << endl; // or recursive_lineat_search_first_occurence are same as recursive_lineat_search
    // cout << recursive_lineat_search_last(v, key, n) << endl;

    // cout << lower_bound(v.begin(), v.end(), key) - v.begin() << endl;
    // cout << upper_bound(v.begin(), v.end(), key) - v.begin() << endl;
    // cout << linearFunc(v, key, n) << endl;
    cout << lower_bound_func(v, key, n) << endl;
    cout << lower_bound_func_1(v, key, n) << endl;

    // how to find nth root of a number using binary search
    int n;
    cin >> n;

    int x = 26;
    return 0;
}
