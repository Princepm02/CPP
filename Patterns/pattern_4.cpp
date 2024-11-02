/* Inverted Triangle pattern
for n=4
1111
 222
  33
   4
1 1 1 1  (To print like this give 2 space in space loop, cout<<"  ")
  2 2 2
    3 3
      4
Inverted pyramid pattern
1 1 1 1
 2 2 2
  3 3
   4
*/
#include <iostream>
using namespace std;

int main()
{
    int n = 4;
    cout << "Inverted Triangle pattern \n";
    for (int i = 0; i < n; i++)
    {
        // Printing Spaces
        for (int s = 0; s < i; s++) // for printing spaces ('i' number of spaces in each line), we can use j variable also instead of 's'
        {
            cout << " "; //
        }
        // Printing numbers
        for (int j = 0; j < n - i; j++) // for printing number ('n-i' numbers)
        {
            cout << i + 1;
        }
        cout << "\n";
    }

    cout << "Inverted pyramid pattern \n"; // Logic is same as above just give extra space after printing number
    for (int i = 0; i < n; i++)
    {
        for (int s = 0; s < i; s++) // for printing spaces ('i' number of spaces in each line), we can use j variable also instead of 's'
        {
            cout << " ";
        }
        for (int j = 0; j < n - i; j++) // for printing number ('n-i' numbers)
        {
            cout << i + 1 << " "; // Extra space for pyramid
        }
        cout << "\n";
    }
    return 0;
}
