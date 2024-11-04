/* Hollow Diamond pattern

   *
  * *
 *   *
*     *
 *   *
  * *
   *

To create above pattern we have to break this pattern into 2 parts horizontally (Top and Bottom):
- : is spaces

---*    Top Pattern
--*-*
-*---*
*-----*
-----------------
-*---*  Bottom Pattern
--*-*
---*
*/
#include <iostream>
using namespace std;

int main()
{
    int n = 4;

    // Top Pattern
    for (int i = 0; i < n; i++)
    {
        for (int s = 0; s < n - i - 1; s++) // Printing Spaces pattern 1
        {
            cout << " ";
        }
        cout << "*"; // Printing Star

        if (i != 0)
        {
            for (int s = 0; s < 2 * i - 1; s++) // Printing Spaces pattern 2
            {
                cout << " ";
            }
            cout << "*"; // Printing Star
        }
        cout << "\n";
    }

    // Bottom Pattern
    for (int i = 0; i < n - 1; i++)
    {
        for (int s = 0; s < i + 1; s++) // Printing Spaces pattern 1
        {
            cout << " ";
        }
        cout << "*"; // Printing Star

        if (i != n - 2)
        {
            for (int s = 0; s < (2 * (n - i) - 5); s++) // Printing Spaces pattern 2
            {
                cout << " ";
            }
            cout << "*"; // Printing Star
        }
        cout << "\n";
    }
    return 0;
}
