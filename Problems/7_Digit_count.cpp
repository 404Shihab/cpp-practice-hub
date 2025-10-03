/* Problem_7: Count the Number of Digits in a Number
 Description:
 Write a C++ program that takes an integer number as input
 and counts how many digits the number contains 
 using a do-while loop.

Sample Output:

Enter the number: 98765
The number of digits is 5
*/

#include <iostream>
using namespace std;
int main()
{
    int n,digit=0;
    cout <<"Enter the number: ";
    cin>>n;

    do
    {
        n/=10;
        digit++;
    }
    while (n>0);
    cout <<"The number of digits is "<< digit;
    return 0;
}