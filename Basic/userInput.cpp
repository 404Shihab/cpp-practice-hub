// Topic: User Input in C++
#include <iostream>
using namespace std;
int main() 
{
    int age;
    float gpa;
    string name;

    // Input age
    cout << "Enter your age: ";
    cin >> age;

    // Input GPA
    cout << "Enter your GPA: ";
    cin >> gpa;

    // Clear input buffer before using getline
    cin.ignore();

    // Input name (full line)
    cout << "Enter your full name: ";
    getline(cin, name); // Takes input with space

    // Output all values
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "GPA: " << gpa << endl;

    return 0;
}
