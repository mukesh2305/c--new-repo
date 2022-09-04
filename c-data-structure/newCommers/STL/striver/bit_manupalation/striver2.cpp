#include <bits/stdc++.h>
using namespace std;

int main()
{
    // question 1 : -------------------------------------------------------
    //  N - intergers - every ineger is upper twice 2 intger upper once in the array
    //  find the integer that is occure once in the array using xor
    // int a[] = {1, 1, 2, 5, 3, 2, 3, 4, 7, 4};

    // map<int, int> n;

    // for (int i = 0; i < sizeof(a) / sizeof(a[0]); i++)
    // {
    //     // if (n.find(a[i]) == n.end())
    //     //     n[a[i]] = 1;
    //     // else
    //     n[a[i]]++;
    // }

    // for (auto it = n.begin(); it != n.end(); it++)
    // {
    //     cout << it->first << " " << it->second << endl;
    // }
    // for (auto it : n)
    // {
    //     cout << it.first << " " << it.second << endl;
    // }

    // for (auto it : n)
    // {
    //     if (it.second == 1)
    //     {
    //         cout << it.first << endl;
    //     }
    // }

    // 5 binary = 0101
    // 1 << 1 = 10
    // 0101
    // 0010

    // 2nd solution-----------------------------------------------------------------------------------------------------------------
    // int firstSet = 0;
    // int secondSet = 0;
    // for (int i = 0; i < sizeof(a) / sizeof(a[0]); i++)
    // {

    //     //   first index of a[i] in the binary representation of a[i] is set to 1 or 0

    //     // firstSet = firstSet | (1 << a[i]);
    //     // secondSet = secondSet | (1 << a[i]);
    //     // if ((a[i] & 1 << 1) > 0)
    //     // if ((a[i] & 1 << 1) ==  0)
    //     if ((a[i] & 1 << 1))
    //     {
    //         // cout << (a[i] & 1 << 1) << endl;
    //         firstSet ^= a[i];
    //     }
    //     else
    //     {
    //         // cout << "secondSet = " << (a[i] & 1 << 1) << endl;

    //         secondSet ^= a[i];
    //     }
    // }
    // cout << firstSet << " " << secondSet << endl;

    // -----------------------------------------------------------------------------------
    // question 2: given n integer array, print the xor of subset
    // int arr[] = { 1, 2, 3 }; int n = sizeof(arr) / sizeof(arr[0]);
    // always subset of xor will be 0
    // if 1 element in the array, xor is the element

    // [1]
    // [2]
    // [3]
    // [1, 2]
    // [1, 3]
    // [2, 3]
    // [1, 2, 3]
    //  count of 1 = 4 , count of 2 = 4, count of 3 = 4
    //  all the number are even number so all the number wil be cancelled out that's why xor is 0

    // ------------------------------------------------------------------------------------------------------
    // question 3:print subset of the array using bit manupulation
    // int arr[] = {1, 2, 3}; // subset will be 2 power of n = 2 pow 3 = 8
    // int n = sizeof(arr) / sizeof(arr[0]);

    // for (int i = 0; i < (1 << n); i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         if ((i & (1 << j)) > 0)
    //         {
    //             cout << arr[j] << " ";
    //         }
    //     }
    //     cout << endl;
    // }

    //  2     1      0   =   output
    // 0    0     0      0   =   []
    // 1    0     0      1   =   [1]
    // 2    0     1      0   =   [2]
    // 3    0     1      1   =   [1, 2]
    // 4    1     0      0   =   [3]
    // 5    1     0      1   =   [1, 3]
    // 6    1     1      0   =   [2, 3]
    // 7    1     1      1   =   [1, 2, 3]

    // ------------------------------------------------------------------------------------------------------
    // question 4: petr and combination lock problem (power set algorithm) is used
    // int n = 4;
    // int arr[] = {270, 270, 270, 270};
    // int arr[] = {10, 10, 10};
    int n = 3;
    int arr[] = {10, 20, 30};
    int flag = 0;
    for (int i = 0; i < (1 << n); i++)
    {
        int sum = 0;
        for (int j = 0; j < n; j++)
        {
            if ((i & (1 << j)) > 0)
            {
                sum += arr[j];
            }
            else
            {
                sum -= arr[j];
            }
        }
        if (sum % 360 == 0)
        {
            flag = 1;
            break;
        }
    }

    if (flag)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}
