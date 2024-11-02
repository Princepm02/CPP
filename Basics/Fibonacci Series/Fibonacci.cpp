// C++ progrm to find the Fibonacci Series.
#include <iostream>

using namespace std;

int main() 
{
    int a = 0;
    int b = 1;
    int c;
    
    cout << "Enter the number of elements you want in Fibonacci series: ";
    int n;
    cin >> n;
    
    cout << "Fibonacci series: " << a << " " << b;
    
    for (int i = 0; i < n - 2; i++) 
    {
        c = a + b;
        cout << " " << c;
        a = b;
        b = c;
    }
    
    return 0;
}
