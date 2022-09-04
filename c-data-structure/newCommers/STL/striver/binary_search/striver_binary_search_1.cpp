#include <bits/stdc++.h>
using namespace std;

// this question does not have duplicate elements
int binary_min_element(vector<int> &v, int n)
{

    int low = 0, high = n - 1;
    while (low < high) // here we have to compare low and high tha's why not use low <= high we don't wnated to go exact last element
    {

        int mid = (low + high) / 2;
        // cout << "low = " << low << " high = " << high << " mid = " << mid << endl;
        // cout << "v[low] = " << v[low] << " v[high] = " << v[high] << " v[mid] = " << v[mid] << endl;
        if (v[mid] < v[high])
            high = mid;
        else
            low = mid + 1;
    }
    return v[low];
}

// find minimum in Rotated sorted array using binary search recursively

int binary_min_element_when_duplicate(vector<int> &v, int n)
{
    // time complexity is O(log(n))
    // worst case is O(n)
    int low = 0, high = n - 1;
    while (low < high)
    {
        int mid = (low + high) / 2;
        if (v[mid] < v[high])
            high = mid;
        else if (v[mid] > v[high])
            low = mid + 1;
        else
            high--;
    }
    return v[low];
}

// find element in the roated sorted array using binary search
int find_element_from_roated_sorted_arr(vector<int> &v, int n, int key)
{
    int low = 0;
    int high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        // if key is present in the middle itself
        if (v[mid] == key)
            return mid;
        // left part is sorted
        if (v[low] <= v[mid])
        {
            if (key >= v[low] && key < v[mid])
                high = mid - 1;
            else
                low = mid + 1;
        }
        // right part is sorted
        else
        {

            if (key >= v[mid] && key <= v[high])
                low = mid + 1;
            else
                high = mid - 1;
        }
    }

    return -1;
}

int peak_element(vector<int> &v, int n)
{
    int low = 0;
    int high = n - 1;
    // 1 2 3 
    while (low < high)
    {
        int mid = (low + high) / 2;
        if (v[mid] > v[mid + 1])
            high = mid;
        else
            low = mid + 1;
    }
    return v[low];
}
// recursive binary search find peak element in  array
int find_peak_element(vector<int> &v, int low, int high)
{
    if (low > high)
        return -1;
    int mid = (low + high) / 2;
    if (mid == 0)
        return v[mid];
    if (v[mid] > v[mid - 1] && v[mid] > v[mid + 1])
        return v[mid];
    if (v[mid] < v[mid - 1])
        return find_peak_element(v, low, mid - 1);
    else
        return find_peak_element(v, mid + 1, high);
}

// check if there exists a subArray of size k
//  which has a sum >= target

// find the min length of subArray such that sum >= element

// 2nd approach
int find_min_length_subarray_sum(vector<int> &v, int n, int target)
{
    int low = 0, high = 0;
    int sum = 0;
    int min_len = n;
    while (high < n)
    {
        sum += v[high];
        while (sum >= target)
        {
            min_len = min(min_len, high - low + 1);
            sum -= v[low];
            low++;
        }
        high++;
    }
    return min_len;
}

//  another approach
bool ok(vector<int> nums, int target, int k)
{
    int sum = 0;

    for (int i = 0; i < k; i++)
        sum += nums[i];
    if (sum >= target) //
        return true;

    // 2, 3, 1, 2, 4, 3

    int l = 0, r = k;
    int maxi = sum;
    while (r < nums.size())
    {
        sum -= nums[l];
        sum += nums[r];
        l++;
        r++;

        maxi = max(sum, maxi);
    }

    return maxi >= target;
}
int minSubArrayLen(int target, vector<int> &nums)
{
    int n = nums.size();

    int l = 1;
    int r = nums.size();

    while (l < r)
    {
        int len = l + (r - l) / 2;

        if (ok(nums, target, len))
        {
            r = len;
        }
        else
        {
            l = len + 1;
        }
    }

    if (ok(nums, target, l))
        return l;
    return 0;
}

// leetcode solution using binary search and sliding window

bool blackBox(vector<int> &v, int target, int k)
{
    int sum = 0;
    for (int i = 0; i < k; i++)
        sum += v[i];
    if (sum >= target)
        return true;

    for (int i = k; i < v.size(); i++)
    {
        sum -= v[i - k];
        sum += v[i];
        if (sum >= target)
            return true;
    }

    return false;
}
int minSubArrayLen1(vector<int> &v, int target)
{
    int low = 0, high = v.size();

    while (low < high)
    {
        int mid = low + (high - low) / 2;
        if (blackBox(v, target, mid))
            high = mid;
        else
            low = mid + 1;
    }

    if (blackBox(v, target, low))
        return low;
    return 0;
}
int main()
{
    // vector<int> v = {4, 5, 6, 7,1 , 2, 3, 4};
    // vector<int> v = {4, 5, 6, 7, 2, 3, 4};
    vector<int> v = {2, 3, 1, 2, 4, 3};

    // vector<int> v = {1, 0, 0, 1, 1, 1, 1};
    // find minimum element in vector
    int n = v.size();
    // cout << peak_element(v, n) << endl;
    // cout << find_min_length_subarray_sum(v, n, 14) << endl;
    cout << minSubArrayLen1(v, 7) << endl;
    // cout << find_peak_element(v, 0, n - 1) << endl;
}