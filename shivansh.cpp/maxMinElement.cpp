#include <bits/stdc++.h>
using namespace std;

int maxElement(int arr[], int n, int i)
{
    int maxEl = INT32_MIN;
    if (i == n - 1)
        return arr[i];
    cout << endl;
    int maxx = maxElement(arr, n, i + 1);
    return max(arr[i], maxx);
}

int minElement(int arr[], int n, int i)
{
    int maxEl = INT32_MAX;
    if (i == n - 1)
        return arr[i];

    int minn = minElement(arr, n, i + 1);
    return min(arr[i], minn);
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(int);
    cout << maxElement(arr, n, 0);
    cout << minElement(arr, n, 0);
    return 0;
}