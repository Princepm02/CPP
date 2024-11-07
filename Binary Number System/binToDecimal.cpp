/* Q. WAP to convert given Binary number into decimal number
Logic - 110 can be written as (1*2^2)+(1*2^1)+(0*2^0) = (1*4)+(1*2)+(0*1) = 6
*/
#include <iostream>
using namespace std;

// Function to convert binary number to decimal number
int binToDecimal(int binNum)
{
    int ans = 0; // Variable to store the decimal result
    int pow = 1; // Variable to keep track of the position (powers of 2)

    // Loop until the binary number becomes zero
    while (binNum > 0)
    {
        int rem = binNum % 10; // Get the remainder when binNum is divided by 10
        ans = ans + (rem * pow); // Add the remainder to the decimal result at the correct position
        binNum = binNum / 10; // Update binNum by dividing it by 10 (move to next decimal position)
        pow = pow * 2; // Update pow to move to the next position in decimal (e.g., 1, 2, 4, etc.)
    }
    return ans; // Return the final decimal number
}

int main()
{
    int binNum;
    cout << "Enter a Binary number to convert it to Decimal number : ";
    cin >> binNum;
    cout << binNum << " in Decimal : " << binToDecimal(binNum);
    return 0;
}
