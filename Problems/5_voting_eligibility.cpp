/*
Problem_5: Voting Eligibility Checker

Description:
Write a C++ program that asks the user to input their birth year.  
The program should calculate the user's age assuming the current year is 2025.  
Then it should determine whether the user is eligible to vote or not.

Rules:
- A person must be at least 18 years old to vote.
- The program should display the user's age and whether they can vote.

Sample Output:
Please enter your birth year: 2008  
You are 16 years old.  
You are below 18. So you cannot vote.
*/

#include <iostream>
using namespace std;
int main()
{
    int year;
    cout << "Please enter your birth year (e.g., 2006): ";
    cin>>year;

    if (year >=1900 && year <=2025)
    {
        int age = 2025-year;
        cout << "You are " << age << " years old." << endl;

        if (age>=18)
        {
            cout <<"You are over 18. So you can vote."<< endl;
        }
        else
        {
            cout <<"You are below 18. So you cannot vote."<< endl;
        }
    }
    else
    {
        cout <<"Invalid input! Please enter a valid year between 1900 and 2025."<< endl;
    }

    return 0;
}
