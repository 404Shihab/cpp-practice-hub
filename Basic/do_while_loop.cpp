#include <iostream>
using namespace std;
int main() 
{
    //Initialization: Set the starting value of the loop variable
    int i=1;

    // The loop body will run at least once, even if the condition is false
    do 
    {
        cout <<i<< endl;

        //Update: Change the loop variable
        i++;
    } 
    //Condition: After each iteration, check if this is still true...
    while (i<=5);

    return 0;
}
