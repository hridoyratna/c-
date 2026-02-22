#include <iostream>
#include <string>
#include <cstring> // Required for strlen()

using namespace std;
int main() {
    string myString = "Hello, world!";

    char myCString[] = "Hello, world!";

    // For C-style strings: Using strlen()
    cout << "The length of the C-style string is: " << strlen(myCString) << endl; // Output: 13

    // Method-1: Using length()
    cout << "The length of the string is: " << myString.length() << endl; // Output: 13

    // Method-2: Using size()
    cout << "The size of the string is: " << myString.size() << endl; // Output: 13

    return 0;
}
