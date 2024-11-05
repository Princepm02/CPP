// Q. Calculate nCr binomial coefficient for n and r using function.

#include <iostream>
using namespace std;

int fact(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}

int nCr(int n, int r)
{
    int nCr;
    nCr = fact(n) / (fact(r) * fact(n - r));
    return nCr;
}

int main()
{
    int n, r;
    cout << "Enter the value of n in nCr : ";
    cin >> n;
    cout << "Enter the value of r in nCr : ";
    cin >> r;

    cout << n << "C" << r << " : " << nCr(n, r);
    return 0;
}
