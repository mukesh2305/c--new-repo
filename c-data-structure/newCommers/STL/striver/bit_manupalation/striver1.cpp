#include <bits/stdc++.h>
using namespace std;

int main()
{
    // question 1 : -------------------------------------------------------
    // int a[] = {2, 1, 2, 5, 6, 5, 7, 7, 6};
    // // find the integer that is occure once in the array using xor
    // int n = sizeof(a) / sizeof(a[0]);
    // int XOR = 0;

    // // same number will be cancelled out because same number XOR with itself will be 0 (2 XOR 2 = 0) // single number will be left
    // for (int i = 0; i < n; i++)
    // {
    //     XOR ^= a[i];
    // }
    // cout << XOR << endl;
    // --------------------------------------------------------------------

    // using map to find the integer that is occure once in the array
    // map<int, int> m;
    // for (int i = 0; i < n; i++)
    // {
    //     if (m.find(a[i]) == m.end())
    //         m[a[i]] = 1;
    //     else
    //         m[a[i]]++;
    // }

    // // print m
    // for (auto it = m.begin(); it != m.end(); it++)
    // {
    //     cout << it->first << " " << it->second << endl;
    // }
    // ---------------------------------------------------------------------------------------

    // question 2: swapping of two numbers using xor-----------------------------------------------------------
    // int a = 5;
    // int b = 7;

    // // a ^ 0 = a
    // a = a ^ b; // a = 5 XOR 7
    // b = a ^ b; // b = (5 XOR 7) XOR 7 = 5
    // a = a ^ b; // a = (5 XOR 7) XOR 5 = 7

    // cout << "a = " << a << " b = " << b << endl;

    // -----------------------------------------------------------------------------------
    // question 3: Given n , print the xor of n numbers between 1 and n using xor and time complexity O(1)
    // int n = 5;

    //  eg : n = 5
    //  n = 1  XOR n = 1    ---------  n % 4 ==  1  -- cout << 1
    //  n = 2  1 XOR 2 = 3  ---------  n % 4 = 2    -- cout << n + 1
    //  n = 3  3 XOR 3 = 0 ---------  n % 4 = 3    -- cout << 0
    //  n = 4  0 XOR 4 = 4   ---------- n % 4 = 0  -- cout << n

    //  n = 5  4 XOR 5 = 1   ---------- n % 4 = 1  -- cout << 1
    // n = 6  1 XOR 6 = 7    ---------- n % 4 = 2  -- cout << n + 1
    // n = 7  7 XOR 7 = 0   ---------- n % 4 = 3   -- cout << 0
    // n = 8  0 XOR 8 = 8   ---------- n % 4 = 0   -- cout << n

    // time complexity is O(1)
    // if (n % 4 == 0)
    //     cout << n;
    // else if (n % 4 == 1)
    //     cout << 1;
    // else if (n % 4 == 2)
    //     cout << n + 1;
    // else if (n % 4 == 3)
    //     cout << 0;

    // time complexity is O(n)
    // int n = 5;
    // int result = 0;
    // for (int i = 1; i <= n; i++)
    //     result = result ^ i;
    // cout << result << endl;

    // -----------------------------------------------------------------------------------
    // question 4 : print xor between 3 to 6 numbers using xor and time complexity O(1)
    // 1 to 2
    // 1 to 6
    // (1 to 2) XOR (1 to 6)
    //  (1 XOR 2) XOR (1 XOR 2 XOR 3 XOR 4 XOR 5 XOR 6)  = (3 XOR 4 XOR 5 XOR 6)

    // int l = 3;
    // int low = l - 1;
    // int r = 6;
    // int resultL = 0;
    // int resultR = 0;

    // if (low % 4 == 0)
    //     resultL = low;
    // else if (low % 4 == 1)
    //     resultL = 1;
    // else if (low % 4 == 2)
    //     resultL = low + 1;
    // else if (low % 4 == 3)
    //     resultL = 0;

    // if (r % 4 == 0)
    //     resultR = r;
    // else if (r % 4 == 1)
    //     resultR = 1;
    // else if (r % 4 == 2)
    //     resultR = r + 1;
    // else if (r % 4 == 3)
    //     resultR = 0;

    // cout << (resultL ^ resultR) << endl;

    // -----------------------------------------------------------------------------------
    //  question 5 : number is odd or even using bitwise operator and time complexity O(1)
    // int n = 6;
    // int result = n & 1;
    // if ((n & 1) == 0)
    //     cout << "even";
    // else
    //     cout << "odd";

    // -----------------------------------------------------------------------------------
    //  question 6 : find if index is set or not set of the number
    // int n = 13;
    // int i = 1;

    // // if ((n & (1 << i)) == 0)
    // //     cout << "not set";
    // // else
    // //     cout << "set";

    // if ((n >> i & 1) == 0)
    //     cout << "not set";
    // else
    //     cout << "set";

    // -----------------------------------------------------------------------------------
    // question: 7 clear that bit and print as it it was before
    // int n = 13;
    // // string binary = bitset<4>(n).to_string();
    // cout << binary << endl;
    // int i = 2;
    // int mask = ~(1 << i);
    // // string binary2 = bitset<4>(mask).to_string();
    // // cout << binary2 << endl;
    // n = n & mask;
    // // string binary3 = bitset<4>(n).to_string();
    // // cout << binary3 << endl;
    // cout << n << endl;

    // binary of 1 = 1   1 << 2 = in binary 100000

    // -----------------------------------------------------------------------------------
    // question 8: make last set bit to unset and print the number
    // string n = "110110";

    // for (int i = n.length() - 1; i >= 0; i--)
    // {
    //     if (n[i] == '1')
    //     {
    //         n[i] = '0';
    //         break;
    //     }
    // }
    // cout << n << endl;

    // without using loop
    // int n = 13;
    //  n = 13 binary = 10011
    //  n = 12 binary = 10010
    // ------------------------
    // 13`& 12 binary = 10010

    // cout << (n & (n - 1)) << endl;

    // binary of 6 = 110

    //  -----------------------------------------------------------------------------------
    // question 9: number is a power of 2 or not
    // int n = 12;

    // // 12 binary =    1100
    // // 11 binary =    1011
    // // 12-11 binary = 100

    // // 8 binary =   1000
    // // 7 binary =   0111
    // // 8-7 binary =  0000

    // int result = n & (n - 1);
    // if (result == 0)
    //     cout << "power of 2";
    // else
    //     cout << "not power of 2";

    // -----------------------------------------------------------------------------------
    // question 10: count the set bit in a number
    int n = 13;
    int count = 0;
    while (n > 0)
    {
        if (n & 1)
            count++;
        n = n >> 1;
    }
    cout << count << endl;

    // 2nd way
    // int n = 13;
    // int count = 0;
    // while (n > 0)
    // {
    //     count++;
    //     n = n & (n - 1);
    // }

    // 13 binary = 	1101
    // 12 binary =  1100
    //  13 & 12 binary =  1100

    //    -----------------------------------------------------------------------------------
}