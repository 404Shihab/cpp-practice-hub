#include <iostream>
using namespace std;
int main() 
{
    //Initialization: Set the starting value of the loop variable
    int i = 1;

    //Condition: The loop will continue as long as this condition is true
    while (i <= 5) {
        cout << i << endl;

        //Update: Change the loop variable to avoid infinite loop
        i++;
    }

    return 0;
}
