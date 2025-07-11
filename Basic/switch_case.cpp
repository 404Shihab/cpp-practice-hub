#include <iostream>
using namespace std;
int main() 
{
    int day;
    cout << "Enter a number (1-7): ";
    cin >> day;

    // Start of switch-case to select the day based on input number
    switch (day) 
    {
        case 1:
            cout << "Sunday" << endl;
            break;
        case 2:
            cout << "Monday" << endl;
            break;
        case 3:
            cout << "Tuesday" << endl;
            break;
        case 4:
            cout << "Wednesday" << endl;
            break;
        case 5:
            cout << "Thursday" << endl;
            break;
        case 6:
            cout << "Friday" << endl;
            break;
        case 7:
            cout << "Saturday" << endl;
            break;
        // Default case when input is not between 1 and 7
        default:
            cout << "Invalid input!!!! Please enter a number from 1 to 7." << endl;
    }

    return 0;
}
