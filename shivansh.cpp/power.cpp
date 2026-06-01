#include <bits/stdc++.h>
using namespace std;

int power(int x, int n)
{
    if (n == 0)
        return 1;
    if (n == 1)
        return x;
    if (n % 2 == 0)
    {
        return power(x, n / 2) * power(x, n / 2);
    }
    else
    {
        return power(x, n / 2) * power(x, n / 2) * x;
    }
}

int main()
{
    cout << power(5, 3);
    return 0;
}