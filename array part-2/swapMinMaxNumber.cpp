#include<iostream>
#include<climits>
using namespace std;

void swapMinMaxNum(int arr[], int size)
{
    int smallIndex = 0;
    int largeIndex = 0;

    for (int i = 1; i < size; i++)
    {
        if (arr[i] < arr[smallIndex])
            smallIndex = i;

        if (arr[i] > arr[largeIndex])
            largeIndex = i;
    }

    swap(arr[smallIndex], arr[largeIndex]);
}

int main()
{
    cout << "Enter size of array: ";
    int size;
    cin >> size;

    int arr[size];

    cout << "Enter elements:\n";
    for (int i = 0; i < size; i++)
        cin >> arr[i];

    swapMinMaxNum(arr, size);

    cout << "\nAfter swapping Max and Min number:\n";
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";

    return 0;
}
