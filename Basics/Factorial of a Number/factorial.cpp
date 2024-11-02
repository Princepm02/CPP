// C++ Program to find factorial of a given number.
#include <iostream>
using namespace std;

int main()
{
    unsigned long long int fact=1;
    int num;
    cout<<"Enter the number for factorial : ";
    cin>>num;
    for (int i = 1; i <= num; i++)
    {
        fact *= i;
    }
    cout<<num<<"! = "<<fact;
    return 0;
}
