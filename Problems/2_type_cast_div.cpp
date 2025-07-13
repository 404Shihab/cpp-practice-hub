/*
Problem_2: Integer Division with Floating-Point Result
Description:
Write a C++ program that prompts the user to enter two integer values. 
The program should then calculate the division of the first integer by the second integer. 
To ensure that the result includes any decimal places 
(i.e., it's a floating-point number rather than an integer-truncated result), 
you must use type casting during the division operation. Finally, 
display the original numbers, the operation, and the floating-point result.

Sample Output:

Please enter your 1st value : 7
Please enter your 2nd value : 2
Your result is: (7 / 2) = 3.5

*/

#include <iostream>
using namespace std;
int main () 
{
    int num1,num2;
    cout << "Please enter your 1st value : ";
    cin >> num1;
    cout << "Please enter your 2nd value : ";
    cin >> num2;

    float div = (float) num1 / num2;
    cout << "Your result is: " << "(" << num1 << " / " << num2 << ") = " << div;

    return 0;
}