// Topic: Range-based For Loop (Foreach Style)
// Use when you don't need the index - only the values
#include <iostream>
using namespace std;
int main()
{
    // Declare and initialize an array
    int array[] = {10,20,30,40,50};

    // Using range-based for loop to iterate over array
    for (int num : array)
    {
        // num takes each value from the array
        cout<<"Value: " << num<< endl;
    }

    return 0;
}
