#include <bits/stdc++.h>
using namespace std;

int reverse(int n, int rev = 0)
{
    if (n == 0)
    {
        return rev;
    }
    reverse(n / 10, rev * 10 + n % 10);
}
int main()
{
    int rev = 0;
    cout << reverse(45, rev);
    return 0;
}