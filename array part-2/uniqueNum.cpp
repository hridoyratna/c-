#include<iostream>
using namespace std;

void uniqueNum(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        bool isUnique = true;

        for (int j = 0; j < size; j++)
        {
            if (i != j && arr[i] == arr[j])
            {
                isUnique = false;
                break;
            }
        }

        if(isUnique)
            cout << arr[i] << " ";
    }
}

int main()
{
    cout<<"Enter size of array: ";
    int size;
    cin >> size;
    int arr[size];

    for (int i = 0; i < size; i++)
        cin >> arr[i];

    uniqueNum(arr, size);

    return 0;
}
