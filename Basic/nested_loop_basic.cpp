// Topic: Nested For Loop in C++
#include <iostream>
using namespace std;
int main()
{
    // Outer loop will run 3 times
    for (int i=1; i<=3; i++)
    {
        // Inner loop will run 4 times for each outer loop
        for (int j=1; j<=4; j++)
        {
            // Printing pair (i,j)
            cout << "(" << i << "," << j << ") ";
        }
        cout << endl; // New line after inner loop ends
    }

    return 0;
}
