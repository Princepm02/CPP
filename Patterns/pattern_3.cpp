/*
for n=4
Star
*
* *
* * *
* * * *

Alphabet Pattern 1
A
B B
C C C
D D D D

Alphabet Pattern 2 (Reverse Triangle Pattern)
A
B A
C B A
D C B A

Number Pattern 1
1
2 2
3 3 3
4 4 4 4

Number Pattern 2
1
1 2
1 2 3
1 2 3 4

Number Pattern 3 (Floyd's Triangle Pattern)
1
2 3
4 5 6
7 8 9 10

Number Pattern 4 (Reverse Triangle Pattern)
1
2 1
3 2 1
4 3 2 1

*/
#include <iostream>
using namespace std;

int main()
{
    int n = 4;
    cout << "Star \n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++) // OR for (int j = 0; j < i+1; j++)
        {
            cout << "* ";
        }
        cout << "\n";
    }

    cout << "\nAlphabet Pattern 1 \n";
    char ch = 'A';
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++) // OR for (int j = 0; j < i+1; j++)
        {
            cout << ch << " ";
        }
        cout << "\n";
        ch++;
    }

    cout << "\nAlphabet Pattern 2 (Reverse Triangle Pattern)\n";
    ch = 'A';
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j >= 0; j--) // Backward loop
        {
            cout << (char)(ch + j) << " "; // Typecasting to char, or else it will print ASCII Value of alphabet
        }
        cout << "\n";
    }

    cout << "\nNumber Pattern 1 \n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++) // OR for (int j = 0; j < i+1; j++)
        {
            cout << i + 1 << " ";
        }
        cout << "\n";
    }

    cout << "\nNumber Pattern 2 \n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++) // OR for (int j = 0; j < i+1; j++)
        {
            cout << j + 1 << " ";
        }
        cout << "\n";
    }

    cout << "\nNumber Pattern 3 (Floyd's Triangle Pattern)\n";
    int num = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++) // OR for (int j = 0; j < i+1; j++)
        {
            cout << num << " ";
            num++;
        }
        cout << "\n";
    }

    cout << "\nNumber Pattern 4 (Reverse Triangle Pattern) \n";
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j > 0; j--) // Backward loop
        {
            cout << j << " ";
        }
        cout << "\n";
    }

    return 0;
}
