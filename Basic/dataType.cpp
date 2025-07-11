// Topic: Variables and Data Types in C++
#include <iostream>
using namespace std;
int main() 
{
    // Basic data types
    int age = 20;
    float gpa = 4.00;
    char grade = 'A';
    bool isPass = true;
    string name = "C plus plus";

    // Output all values
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "GPA: " << gpa << endl;
    cout << "Grade: " << grade << endl;
    cout << "Pass Status: " << isPass << endl;

    //Declare Multiple Variables
    int a,b,c;
    a=10,b=10,c=10;
    // or, a=b=c=10;
    cout << a << " " << b << " " << c <<endl;

    //Constants
    const int number = 15;  // Constant must be initialized
    // number = 10;         // Error: cannot change a const

    cout << "Number: " << number << endl;

    // Declare constant for days in a week
    const int daysPerWeek = 7;
    cout << "There are " << daysPerWeek << " days in a week." << endl;

    return 0;
}
