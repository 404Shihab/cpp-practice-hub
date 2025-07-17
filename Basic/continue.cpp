#include <iostream>
using namespace std;
int main() 
{
    int i=0;

    //Loop will run while i<10
    while (i<10) 
    {
        i++;            //Update first to avoid infinite loop

        if (i==5) 
        {
            //Skip printing when i is 5
            continue;
        }

        cout <<"Current value: "<<i<< endl;
    }

    return 0;
}
