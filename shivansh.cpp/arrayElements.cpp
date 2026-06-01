#include <bits/stdc++.h>
using namespace std;

int arrayElements(int arr[], int n, int i)
{
    if (i == n)
        return arr[i];
    cout << arr[i] << " ";
    arrayElements(arr, n, i + 1);
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(int);
    arrayElements(arr, n, 0);
    return 0;
}