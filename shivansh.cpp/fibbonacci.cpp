#include <bits/stdc++.h>
using namespace std;

int fibbonacci(int n)
{
    if (n == 1)
        return 0;
    if (n == 2)
        return 1;
    return fibbonacci(n - 1) + fibbonacci(n - 2);
}
int main()
{
    cout << fibbonacci(5);
    return 0;
}