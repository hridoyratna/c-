// Most Optimized Solution
// Time Complexity: O(n)
// It's always exits answer 

// Do not need sorting

#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

int majorityElement(vector<int>arr,int size){

    int count = 0, ans = 0;
    for(int i = 0; i < size; i++){
        if(count == 0){
            ans = arr[i];
        }
        if(ans == arr[i]){
            count++ ;
        }else{
            count--;     
        }
    }
    return ans;
}

int main(){

    vector<int> arr = {2,2,1,3,4,1,3,1,3,3,3,3,3};
    int size = arr.size();

    int ans = majorityElement(arr,size);

    cout<< "Majority Element is : "<<ans<<endl;


    return 0;
}