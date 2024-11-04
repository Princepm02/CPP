/* 
Butterfly Pattern

*      *
**    **
***  ***
********
********
***  ***
**    **
*      *

To create above pattern we have to break this pattern into 2 parts horizontally (Top and Bottom):
*      *    Top Pattern
**    **
***  ***
********
_________________

********   Bottom Pattern
***  ***
**    **
*      *

*/
#include <iostream>
using namespace std;

int main()
{
    int n=4;
    // Top Pattern
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i+1;j++) // Printing star
        {
            cout<<"*";
        }
        for(int s=0;s<2*(n-i-1);s++) // Printing spaces
        {
            cout<<" ";
        }
        for(int j=0;j<i+1;j++) // Printing star
        {
            cout<<"*";
        }
        cout<<"\n";
    }

    // Bottom Pattern
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i;j++) // Printing star
        {
            cout<<"*";
        }
        for(int s=0;s<2*i;s++) // Printing spaces
        {
            cout<<" ";
        }
        for(int j=0;j<n-i;j++) // Printing star
        {
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}
