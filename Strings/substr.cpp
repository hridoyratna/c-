// string substr(start_position,  length );
// string substr(start_position);    end = 


#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "Hello, World!";
    
    // Extract a substring starting at index 7 with a length of 5 characters
    string substr1 = str.substr(7, 5);
    cout << "Substr 1: " << substr1 << endl; // Output: World

    //find a spacific index
    int comma_pos = str.find(',');
    cout <<"The index of comma : "<<comma_pos<<endl;

    // Extract a substring starting at index 0 up to the comma
    string sub2 = str.substr(0, comma_pos);
    cout << "Substr 2: " << sub2 << endl; // Output: Hello
    
    // Extract a substring from index 7 to the end of the string
    string sub3 = str.substr(7);
    cout << "Substr 3: " << sub3 << endl; // Output: World!

    //find a end position of a sub_pattern 
    int comma_pos1 = str.find('Wor');
    cout <<"The index of comma : "<<comma_pos1<<endl;

    return 0;
}
