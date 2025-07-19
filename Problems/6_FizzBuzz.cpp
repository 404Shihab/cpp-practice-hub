/*
Problem_6: FizzBuzz Checker
Description:
Write a C++ program that takes an integer number from the user 
and prints:

- "FizzBuzz" if the number is divisible by both 3 and 5,
- "Fizz" if the number is only divisible by 3,
- "Buzz" if the number is only divisible by 5.

Sample Output:

Please enter number: 15
FizzBuzz

Please enter number: 9
Fizz

Please enter number: 10
Buzz
*/

#include <iostream>
using namespace std;
int main() 
{
    int num;
    cout << "Please enter number: ";
    cin >> num;

    if (num %3 == 0 && num%5 == 0) 
    {
        cout << "FizzBuzz" << endl;
    }
    else if (num%3 == 0) 
    {
        cout <<"Fizz"<< endl;
    }

    else if (num % 5==0) 
    {
        cout << "Buzz" << endl;
    }

    else 
    {
        cout <<"Not Fizz or Buzz"<< endl;
    }

    return 0;
}
