/*
for n=4
Star
*
* *
* * *
* * * *

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

Alphabet
A
B B
C C C
D D D D

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

    cout << "\nAlphabet \n";
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
    return 0;
}
