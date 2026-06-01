#include <bits/stdc++.h>
using namespace std;

int sumOfNum(int n)
{
    if (n == 1 || n == 0)
    {
        return n;
    }
    return n + sumOfNum(n - 1);
}
int main()
{
    cout << sumOfNum(5);
    return 0;
}