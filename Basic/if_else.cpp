// Topic: If-Else and Else If (Basic Example)
#include <iostream>
using namespace std;
int main() 
{
    int num;
    cout << "Enter a number: ";
    cin >> num;

    // Simple if condition
    if (num > 0) {
        cout << "The number is positive." << endl;
    }
    // else if condition
    else if (num < 0) {
        cout << "The number is negative." << endl;
    }
    // else block (zero case)
    else {
        cout << "The number is zero." << endl;
    }

    return 0;
}
