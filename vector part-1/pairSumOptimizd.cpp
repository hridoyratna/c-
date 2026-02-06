// Optimized Solution(2 pointer Approach)
// Linear Time Complexity: O(n)
// It's always exits answer 
// This approach is possible because of 'Sorted array' and 'answer always exited'


#include<iostream>
#include<vector>
using namespace std;

vector<int> pairSum(vector<int>arr,int size, int target){

    vector<int> ans;
    int start = 0, end = size - 1;
    while(start < end){
        int current_sum = arr[start] + arr[end];
        if (current_sum > target)
        {
            end-- ;
        }else if (current_sum < target)
        {
            start++ ;
        }else{
            ans.push_back(start);
            ans.push_back(end);
            return ans;
        }  
    }
    return ans;
}

int main(){

    vector<int> arr = {2,7,11,15};
    int target = 13;
    int size = arr.size();


    vector<int>ans = pairSum(arr,size,target);

    cout<<"The target pair sum index is : "<<ans[0]<<" , " <<ans[1]<<endl;

    return 0;
}