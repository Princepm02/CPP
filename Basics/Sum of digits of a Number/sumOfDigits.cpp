// Q. Calculate sum of digits of a number.
// for eg. num = 145 then sum = 1+4+5 = 10

#include <iostream>
using namespace std;

int sumOfDigits(int num)
{
    int rem, digSum = 0;
    while (num > 0)
    {
        rem = num % 10;
        num /= 10;
        digSum += rem;
    }
    return digSum;
}

int main()
{
    int num;
    cout << "Enter a number : ";
    cin >> num;
    cout << "Sum of digits of given number : " << sumOfDigits(num);
    return 0;
}
