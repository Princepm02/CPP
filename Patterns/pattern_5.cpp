/*Pyramid pattern
for n=4
   1
  121
 12321
1234321

To create above pattern we have to break this pyramid into 3 parts:
Spaces:
_ _ _ (3 Spaces)
_ _ (2 Spaces)
_ (1 Space)
(0 Space)
Triangle Pattern Number 1
   1   // Just print the number because we have already printed the spaces
  12
 123
1234
Triangle Pattern Number 2
_
1
21
321

*/
#include <iostream>
using namespace std;

int main()
{
    int n = 4;
    for (int i = 0; i < n; i++)
    {
        // Printing Spaces
        for (int s = 0; s < n - i - 1; s++)
        {
            cout << " ";
        }
        // Printing Triangle Pattern Number 1
        for (int j = 1; j <= i + 1; j++)
        {
            cout << j;
        }
        // Printing Triangle Pattern Number 2
        for (int k = i; k > 0; k--)
        {
            cout << k;
        }
        cout << "\n";
    }
    return 0;
}
