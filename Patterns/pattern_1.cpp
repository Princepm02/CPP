/*
Square Pattern
1 2 3 4
1 2 3 4
1 2 3 4
1 2 3 4

A B C D
A B C D
A B C D
A B C D
*/
#include <iostream>
using namespace std;

int main()
{
    // for 1 2 3 4
    int n = 4;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << j << " ";
        }
        cout << "\n";
    }

    cout<<"\n\n";
    // for A B C D
    for (int i = 0; i < n; i++)
    {
        char ch = 'A';
        for (int j = 0; j < n; j++)
        {
            cout << ch << " ";
            ch = ch + 1; // Adding 1 to ASCII value of 'A'(Character)
        }
        cout << "\n";
    }


    return 0;
}
