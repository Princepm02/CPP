// Find given character is Uppercase or LowerCase

#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout << "Enter Character: ";
    cin >> ch;
    if (ch >= 'A' && ch <= 'Z') // OR use => if (ch >= 65 && ch <= 90) ASCII Value
    {
        cout << "Uppercase";
    }
    else if (ch >= 'a' && ch <= 'z') // OR use => if (ch >= 97 && ch <= 122) ASCII Value
    {
        cout << "Lowercase";
    }

    else
    {
        cout << "Invalid Input";
    }

    return 0;
}
