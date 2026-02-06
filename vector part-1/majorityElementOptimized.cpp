// Optimized Solution
// Time Complexity: O(nlogn)
// It's always exits answer 

// setp1: sort the array
// step2: apply for loop

#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

int majorityElement(vector<int>arr,int size){
    int freq = 1, ans = arr[0];

    for (int i = 1; i < size; i++)
    {
        if (arr.at(i) == arr.at(i-1))
        {
            freq++ ;
        }else{
            freq = 1 , ans = arr[i];
        }

        if (freq > size/2)
        {
            return ans;
        }
    }
}

int main(){

    vector<int> arr = {2,2,1,3,4,1,3,1,3,3,3,3,3};
    int size = arr.size();

    sort(arr.begin(),arr.end());
    int ans = majorityElement(arr,size);

    cout<< "Majority Element is : "<<ans<<endl;


    return 0;
}