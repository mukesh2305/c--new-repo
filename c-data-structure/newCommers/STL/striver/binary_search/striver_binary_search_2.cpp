#include <bits/stdc++.h>
using namespace std;

int findSumAfterDivision(vector<int> &v, int n, int div)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += (v[i] / div);

        // take ceil of the number if it is not divisible by div
        if (v[i] % div != 0)
            sum += 1;
    }

    return sum;
}
int findMinDivisor(vector<int> &v, int n, int thresold)
{
    int low = 0, high = *max_element(v.begin(), v.end());
    int ans = high;
    while (low <= high)
    {
        int mid = (low + high) / 2;

        // mid is giving less than equal to thresold
        // but we need to find the minimum divisor
        //  hence do , search in the left side
        if (findSumAfterDivision(v, n, mid) <= thresold)
        {
            ans = mid;
            high = mid - 1;
        }
        else
            low = mid + 1;
    }
    return ans;
}

int findMinDivisor1(vector<int> &v, int n, int thresold)
{
    int low = 0, high = *max_element(v.begin(), v.end());
    while (low < high)
    {
        int mid = (low + high) / 2;
        if (findSumAfterDivision(v, n, mid) <= thresold)
            high = mid;
        else
            low = mid + 1;
    }

    return high; // return high because // inside the question mention that there will be alway a minimum divisor // if we not find any thing then high is always lowest devisor
    // return low ; both are valid
}

int just(vector<int> &v) // linear method to minimum sum of two subarray
{
    // declar vector to store the sum of each element
    vector<int> vis;
    int sum = 0;
    int ans = INT_MAX;
    for (int i = 0; i < v.size(); i++)
    {
        sum += v[i];
        int sum1 = 0;
        for (int j = i + 1; j < v.size(); j++)
        {
            sum1 += v[j];
        }
        ans = min(ans, max(sum, sum1));
    }

    return ans;
}

// linear method to minimum sum of two subarray
bool numberOfSubArrayByKeepingLmit(vector<int> &v, int n, int limit, int m)
{
    int cnt = 1;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] > limit)
            return false;
        if (sum + v[i] > limit)
        {
            cnt++;
            sum = v[i];
        }
        else
        {
            sum += v[i];
        }
    }
    return cnt <= m;
}

// time complexity of  minMaxSumSubArray = n * log(sum - max + 1)
// 0(n) + 0(n) + log(n)
// For finding max element 0(n) + Sum 0(n) + bs 0(logn)
int minMaxSumSubArray(vector<int> &v, int n, int m)
{
    //  m is the limit of subArray if m = 2 then we can have only 2 subArray
    int low = *max_element(v.begin(), v.end());
    int high = 0; // high is the sumation of all the elements
    for (int i = 0; i < n; i++)
        high += v[i];
    int ans = high;
    while (low < high)
    {
        int mid = (low + high) / 2;
        if (numberOfSubArrayByKeepingLmit(v, n, mid, m) == false)
        {
            low = mid + 1;
        }
        else
        {
            ans = mid;
            high = mid - 1;
            // high = mid;
        }
    }

    // return low;
    return ans;
}

// Question = divide chocolate
bool canGetMoreThanKSubArray(vector<int> &v, int n, int limit, int k)
{
    int cnt = 0;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += v[i];
        if (sum >= limit)
        {
            cnt++;
            sum = 0;
        }
    }
    return cnt >= k;
}
int findMaxChocolate(vector<int> &v, int n, int k)
{
    int low = *min_element(v.begin(), v.end());
    int high = 0;
    int ans = 1;
    for (int i = 0; i < n; i++)
        high += v[i];

    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (canGetMoreThanKSubArray(v, n, mid, k) == true)
        {
            ans = mid;
            low = mid + 1;
        }
        else
            high = mid - 1;
    }

    return ans;
}

int main()
{
    // vector<int> v = {1, 2, 5, 9};
    // vector<int> v = {7, 2, 5, 10, 8};
    vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = v.size();
    int thresold = 6;
    // cout << findMinDivisor1(v, n, thresold);
    // cout << just(v);
    cout << findMaxChocolate(v, n, 5);
}