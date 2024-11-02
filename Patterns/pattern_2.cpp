/*
Square Pattern
1 2 3
4 5 6      for n=3
7 8 9
OR
1 2 3 4
5 6 7 8       for n=4
9 10 11 12
13 14 15 16

A B C
D E F    for n=3
G H I
OR
A B C D
E F G H   for n=4
I J K L
M N O P
*/
#include <iostream>
using namespace std;

int main()
{
    int n = 4, num = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << num << " ";
            num++;
        }
        cout << "\n";
    }
    cout << "\n\n";

    
    char ch='A';
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << ch << " ";
            ch++;
        }
        cout << "\n";
    }

    return 0;
}
