#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    // bubble sort 2 for loop
    // 1st loop = round = length - 1
    // 2nd loop = j < lenght - i // comparision for each round

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int round = n - 1;

    for (int i = 1; i <= round; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp;
                temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}