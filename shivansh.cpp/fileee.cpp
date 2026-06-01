#include <bits/stdc++.h>
using namespace std;

int printNumbersReverse(int n)
{
    if (n == 1)
        return 1;
    if (n > 1)
    {
        cout << n << " ";
        printNumbersReverse(n - 1);
    }
}
int main()
{
    cout << printNumbersReverse(10);
    return 0;
}