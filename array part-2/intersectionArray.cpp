#include<iostream>
using namespace std;

void intersectionArray(int arr1[],int size1, int arr2[],int size2){
    
    cout<<endl<<"Intersect value of two array : ";
    for (int i = 0; i < size1; i++){

        bool alreadyPrinted = false;

        for (int k = 0; k < i; k++)
        {
            if (arr1[i] == arr1[k])
            {
                alreadyPrinted = true;
                break;
            }
            
        }

        if (alreadyPrinted)
        {
            continue;
        }
        
        
        for (int j = 0; j < size2; j++){
            if (arr1[i] == arr2[j])
            {
                cout << arr1[i] << " ";
                break;
            }
        }
            
    }
}

int main()
{
    cout<<"Enter size of first array: ";
    int size1;
    cin >> size1;
    int arr1[size1];

    cout<<"Enter first array"<<endl;
    for (int i = 0; i < size1; i++){
        cin >> arr1[i];
    }
    cout<<endl;

    cout<<"Enter size of second array: ";
    int size2;
    cin >> size2;
    int arr2[size2];

    cout<<"Enter second array"<<endl;
    for (int i = 0; i < size2; i++){
        cin >> arr2[i];
    }

    intersectionArray(arr1,size1,arr2,size2);

    return 0;
}
