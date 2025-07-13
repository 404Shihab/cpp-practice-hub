/*
Problem_3: Grade Checker with Input Validation
Description:
Write a C++ program that takes a student's mark (integer input)
and determines the corresponding grade based on the following rules:

- 80 or more: A+
- 70 to 79: A
- 60 to 69: B
- 50 to 59: C
- Below 50: F

The mark must be between 0 and 100. If the user enters an invalid number,
the program should display an error message and exit.

Sample Output:

Enter your mark: 112
Invalid mark! Please enter a number between 0 and 100.
*/

#include <iostream>
using namespace std;
int main() 
{
    int marks;

    cout << "Enter your mark: ";
    cin >> marks;

    if (marks < 0 || marks > 100) 
    {
        cout << "Invalid mark! Please enter a number between 0 and 100." << endl;
    }
    else if (marks >= 80) 
    {
        cout << "Your Grade is: A+" << endl;
    }
    else if (marks >= 70) 
    {
        cout << "Your Grade is: A" << endl;
    }
    else if (marks >= 60) 
    {
        cout << "Your Grade is: B" << endl;
    }
    else if (marks >= 50) 
    {
        cout << "Your Grade is: C" << endl;
    }
    else 
    {
        cout << "Your Grade is: F" << endl;
    }

    return 0;
}
