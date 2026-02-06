// Brute-Force-Approach 
// Time Complexity: O(n^2)
// It's always exits answer and it is also sorted array so its exit optimized solution

#include<iostream>
#include<vector>
using namespace std;

vector<int> pairSum(vector<int>arr,int size, int target){

    vector<int> ans;
    for (int start = 0; start < size-1; start++)
    {
        for (int end = start+1; end < size; end++)
        {
            if (arr[start] + arr[end] == target)
            {
                ans.push_back(start);
                ans.push_back(end);
                return ans;
            }
        }
    }
    return ans;
}

int main(){

    vector<int> arr = {2,7,11,15};
    int target = 22;
    int size = arr.size();


    vector<int>ans = pairSum(arr,size,target);

    cout<<"The target pair sum index is : "<<ans[0]<<" , " <<ans[1]<<endl;

    return 0;
}