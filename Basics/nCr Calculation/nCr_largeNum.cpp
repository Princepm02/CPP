// Q. Calculate nCr binomial coefficient for n and r. (This is optimized approach and for large number.)

#include <iostream>

using namespace std;

long long nCr(int n, int r)
{
    // If r > n, then nCr is 0
    if (r > n)
        return 0;

    // Since C(n, r) = C(n, n-r), we can reduce the number of iterations
    if (r > n - r)
        r = n - r;

    long long result = 1;

    // Calculate the result iteratively
    for (int i = 0; i < r; i++)
    {
        result *= (n - i); // n * (n-1) * ... * (n-r+1)
        result /= (i + 1); // 1 * 2 * ... * r
    }

    return result;
}

int main()
{
    int n, r;
    cout << "Enter the value of n in nCr: ";
    cin >> n;
    cout << "Enter the value of r in nCr: ";
    cin >> r;

    cout << n << "C" << r << " : " << nCr(n, r) << endl;
    return 0;
}
