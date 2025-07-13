/*
Problem_4: Grade Checker (Using Switch Case)
Description:
Write a C++ program that takes a student's mark (integer input)
and determines the corresponding grade using switch-case.

Rules:
- 80 or more: A+
- 70 to 79: A
- 60 to 69: B
- 50 to 59: C
- Below 50: F

The mark must be between 0 and 100. If the input is invalid,
display an error message.

Sample Output:
Enter your mark: 85
Your Grade is: A+
*/

#include <iostream>
using namespace std;
int main() 
{
    int marks;
    cout << "Enter your mark: ";
    cin >> marks;

    if (marks<0 || marks>100) 
    {
        cout<<"Invalid mark! Please enter a number between 0 and 100."<<endl;
    } 
    else 
    {
        switch (marks/10) 
        {
            case 10:
            case 9:
            case 8:
                cout << "Your Grade is: A+" << endl;
                break;
            case 7:
                cout << "Your Grade is: A" << endl;
                break;
            case 6:
                cout << "Your Grade is: B" << endl;
                break;
            case 5:
                cout << "Your Grade is: C" << endl;
                break;
            default:
                cout << "Your Grade is: F" << endl;
        }
    }

    return 0;
}
