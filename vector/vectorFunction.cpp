#include<iostream>
#include<vector>
using namespace std;
int main(){

    // Size function
    vector<int> vec;      //Empty vector so size 0
    cout<<"Size : "<<vec.size()<<endl;

    vector<char> ch = {'H','R','I','D','O','Y'};  //size = 6
    cout<<"Size of vector ch : " <<ch.size()<<endl;
    for(char alphabet: ch){    // print 
        cout<< alphabet << " ";    
    }cout<<endl<<endl;



    //push_back   (insert value at the last)
    // capacity
    vec.push_back(4);
    vec.push_back(9);
    vec.push_back(8);
    vec.push_back(3);
    vec.push_back(1);
    cout<<"Size : "<<vec.size()<<endl;  // size = 5
    cout<<"Capacity : "<<vec.capacity()<<endl;  // capacity = 8  (size and capaity not same )
    for(int val: vec){    
        cout<< val << endl;    
    }cout<<endl<<endl;



    //pop_back   (delete value from the last)
    vec.pop_back();  //delete 1
    vec.pop_back();  // delete 3
    cout<<"After pop_back"<<endl;
    cout<<"Size : "<<vec.size()<<endl;  // size = 3
    cout<<"Capacity : "<<vec.capacity()<<endl;  // capacity = 8 (After pop size decreased but capacity still same)
    for(int val: vec){    
        cout<< val << endl;    
    }cout<<endl<<endl;


    // front (print first value of the vector)
    cout<<"First character of ch vector : "<<ch.front()<<endl;  // H

    // back (print last value of the vector)
    cout<<"Last character of ch vector : "<<ch.back()<<endl;   // Y

    // at (print that we want from a vector)
    cout<<"Print index 3 value of ch vector : "<<ch.at(3)<<endl;  // D


    return 0;
}