#include <iostream>
using namespace std;
int main() 
{
    int i=1;
    //Loop will run while i<=10
    while (i<=10) 
    {
        if (i==6) // When i is 6, break the loop (stop immediately)
        {
            cout << "Breaking the loop at i = " <<i<<endl;
            break;
        }
        cout<<"Current value: " <<i<<endl;
        i++;
    }

    return 0;
}
