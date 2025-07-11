// Topic: Overview of Operators in C++
#include <iostream>
using namespace std;
int main() 
{
    int a=10, b=3;
    
    // Arithmetic Operators
    cout << "Addition: " << a+b << endl;
    cout << "Subtraction: " << a-b << endl;
    cout << "Multiplication: " << a*b << endl;
    cout << "Division: " << a/b << endl;
    cout << "Modulus: " << a%b << endl;

    // Assignment Operator
    int c=a;
    cout << "Assignment: c = " <<c<<endl;

    // Comparison Operators
    cout <<"Is a equal to b?"<< (a==b) << endl;
    cout << "Is a not equal to b? "<< (a!=b) << endl;

    // Logical Operators
    bool x=true, y=false;
    cout << "x AND y: " << (x&&y) << endl;
    cout << "x OR y: " << (x||y) << endl;
    cout << "NOT x: " << (!x) << endl;

    return 0;
}
