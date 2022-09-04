#include <bits/stdc++.h>
using namespace std;

int main()
{
    // J. Multiples
    int a, b;
    cin >> a >> b;
    if ((a > b ? a : b) % (a < b ? a : b) == 0)
    {
        cout << "Multiples";
    }
    else
    {
        cout << "No Multiples";
    }
    return 0;
}
// IMPORTANCE NOTE:
/**
 * First Example :

9 is divisible by 3 , So the answer is: Multiples.

Second Example :

6 is not divisible by 24 but

24 is divisible by 6 , So the answer is: Multiples.

Third Example :

12 is not divisible by 5 and 5 is not divisible by 12.

So the answer is: No Multiples.
*/

// multiple of a number
// 9               3
// 9 * 1 = 9       3 * 1 = 3
// 9 * 2 = 18      3 * 2 = 6
// 9 * 3 = 27      3 * 3 = 9

// 9, 18, 27..    // 3, 6, 9
// are the multi..// are the multiple of 3
// ple of 9

// Factors & Multiples -------------------

// 12

//  12 = 1 * 12
//     = 2 * 6
//     = 3 * 4

// 1, 2, 3, 4, 6, 12 (this are the factors of the 12)
//  12 => is a Multiple of all of its factors
