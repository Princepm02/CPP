// Q. Calculate sum of numbers from 1 to N using function.

#include <iostream>
using namespace std;

void sumN(int n) // Parameters
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    cout << "Sum of numbers 1 to " << n << " : " << sum;
}

int main()
{
    int n;
    cout << "Sum of number : ";
    cin >> n;
    sumN(n); // Arguments
    return 0;
}
