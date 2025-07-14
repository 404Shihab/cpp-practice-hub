#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter how many times you want to print your name: ";
    cin>>n;

    cin.ignore();

    string s;
    cout << "Enter your name: ";
    getline(cin, s);

    // Loop starts: i = 1
    // Runs as long as i <= n
    // After each iteration, i increases by 1 (i++)
    for (int i=1; i<=n; i++) 
    {
        // This block runs once for every value of i (from 1 to n)
        cout << i << ". " << s << endl;
    }

    return 0;
}
