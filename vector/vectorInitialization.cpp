#include<iostream>
#include<vector>
using namespace std;
int main(){

    // first way 
    vector<int> vec;      //Empty vector

    cout<<"First way to initialized vector "<<endl;
    for(int val: vec){    // Don't print 
        cout<< val << endl;    
    }cout<<endl<<endl;

    // second way
    vector<int> nums = {2,4,5,1,8};    //Initialized vector

    cout<<"Second way to initialized vector "<<endl;
    for(int val: nums){    // print 
        cout<< val << " ";    
    }cout<<endl<<endl;

    // third way
    vector<char> ch(5,'B');  // Initialized with fixed  value { vector<datatype> variable(size,value) }

    cout<< "Third way to initialized vector with fixed value "<<endl;
    for(char alphabet: ch){    // print 
        cout<< alphabet << " ";    
    }cout<<endl;

    return 0;
}