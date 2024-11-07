/* Q. WAP to convert given decimal number into Binary
Logic - 101 can be written as (1*10^2)+(0*10^1)+(1*10^0) = (1*100)+(0*10)+(1*1) = 101
*/
#include <iostream>
using namespace std;

// Function to convert a decimal number to binary
int decToBinary(int decNum)
{
    int ans = 0; // Variable to store the binary result
    int pow = 1; // Variable to keep track of the position (powers of 10)

    // Loop until the decimal number becomes zero
    while (decNum > 0)
    {
        int rem = decNum % 2; // Get the remainder when decNum is divided by 2 (0 or 1)

        ans = ans + (rem * pow); // Add the remainder to the binary result at the correct position

        decNum = decNum / 2; // Update decNum by dividing it by 2 (move to next binary position)

        pow = pow * 10; // Update pow to move to the next position in binary (e.g., 1, 10, 100, etc.)
    }

    // Return the final binary number
    return ans;
}

int main()
{
    int decNum;
    cout << "Enter a decimal number to convert it to Binary : ";
    cin >> decNum;
    cout << decNum << " in Binary : " << decToBinary(decNum);
    return 0;
}
