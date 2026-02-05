#include<iostream>
#include<vector>
using namespace std;
int linearSearch(vector<int> nums,int size,int target){
    for(int i = 0 ; i < size;i++){
        if(nums.at(i) == target){
            return i;
        }
    }
    return -1;
}
int main(){

    vector<int> nums = {1,5,3,0,9};
    int size = nums.size();
    int target = 9;

    
    cout<< linearSearch(nums,size,target) <<endl;


    return 0;
}