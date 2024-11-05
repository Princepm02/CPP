// Q. Print all the Prime number from 2 to N (Given Number)

#include <iostream>

using namespace std;

int main()
{
    int num;
    cout << "Enter a number up to which to find primes: ";
    cin >> num;

    if (num <= 1)
    {
        cout << "There are no prime numbers in the given range.";
    }
    else
    {
        cout << "Prime numbers up to " << num << " are: ";
        for (int i = 2; i <= num; i++)
        {
            bool isPrime = true;
            for (int j = 2; j * j <= i; j++)
            {
                if (i % j == 0)
                {
                    isPrime = false;
                    break;
                }
            }
            if (isPrime == true)
            {
                cout << i << " ";
            }
        }
    }
    return 0;
}
