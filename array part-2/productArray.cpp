#include<iostream>
using namespace std;
int productArray(int arr[],int size){
    int product = 1;

    for (int i = 0; i < size; i++)
    {
        product *= arr[i];
    }
    return product;
    
}
int main(){

    cout<< "Enter array size: ";
    int size ;
    cin>>size;
    int arr[size];

    for (int i = 0; i < size; i++)
    {
       cin>>arr[i];
    }

    int product = productArray(arr,size);

    cout << "Product of the array is : "<<product<<endl;
    

    return 0;
}