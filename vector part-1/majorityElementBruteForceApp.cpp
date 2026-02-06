// Brute-Force-Approach 
// Time Complexity: O(n^2)
// It's always exits answer and its exit optimized solution

#include<iostream>
#include<vector>
using namespace std;

int majorityElement(vector<int>arr,int size){
 
    for (int val: arr)
    {
        int frequency = 0;
        for (int element: arr)
        {
            if (val == element)
            {
                frequency++ ;
            }
        }
        if (frequency > size/2)
        {
            return val;
        }
    }

}

int main(){

    vector<int> arr = {2,2,1,3,4,1,3,1,3,3,3,3,3};
    int size = arr.size();

    int ans = majorityElement(arr,size);

    cout<< "Majority Element is : "<<ans<<endl;


    return 0;
}