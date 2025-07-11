/* Problem_1: Simple Character Encryption and Decryption
 Description:
 Write a C++ program that takes a single character as input, 
 encrypts it by shifting the character 3 positions forward in the ASCII table, 
 then decrypts it back to the original character by reversing the shift.

Sample Output:

Please write your message : A
Encrypting...
Here is your encryption message: D
Decrypting...
Here is your original message: A

*/
#include <iostream>
using namespace std;
int main()
{
    char i;
    cout << "Please write your message : ";
    cin >> i;
    cout << "Encrypting..." << endl;
    char j = i+3 ;
    cout << "Here is your encryption message: " << j << endl;
    cout << "Decrypting..." << endl;
    char k = j-3 ;
    cout << "Here is your original massage:" << k << endl;

    return 0;
}
