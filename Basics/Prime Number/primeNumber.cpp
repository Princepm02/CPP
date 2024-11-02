// To check the given Number is Prime or Not (Logic for large number is written in multi-line comments)
#include <iostream>
using namespace std;

int main()
{
    int num;
    bool isPrime = true;
    cout << "Enter a number to check Prime : ";
    cin >> num;
    if (num <= 1)
    {
        cout << num << " is Not Prime, it is less than or equal to 1";
    }
    else
    {
        for (int i = 2; i * i <= num; i++)
        {
            if (num % i == 0)
            {
                isPrime = false;
                break;
            }
        }
        if (isPrime == false)
        {
            cout << num << " is Not a Prime Number";
        }
        else
        {
            cout << num << " is Prime Number";
        }
    }
    return 0;
}

// LOGIC for large number

/* #include <cmath>   // for sqrt()

// Function to check if a number is prime
bool isPrime(long long n) {
    // Handle base cases
    if (n <= 1) return false;          // 0 and 1 are not primes
    if (n == 2 || n == 3) return true; // 2 and 3 are prime numbers
    if (n % 2 == 0 || n % 3 == 0) return false; // Divisible by 2 or 3 are not primes

    // Check for divisibility using numbers of the form 6k ± 1
    for (long long i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }

    return true; // If no divisor found, it's prime
}

int main() {
    long long number;
    std::cout << "Enter a number: ";
    std::cin >> number;

    if (isPrime(number))
        std::cout << number << " is a prime number.\n";
    else
        std::cout << number << " is not a prime number.\n";

    return 0;
} */
