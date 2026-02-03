#include<iostream>
using namespace std;
int SumArray(int arr[],int size){
    int sum = 0;

    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return sum;
    
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

    int sum = SumArray(arr,size);

    cout << "Sum of the array is : "<<sum<<endl;
    

    return 0;
}