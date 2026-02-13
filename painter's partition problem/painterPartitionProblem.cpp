#include<iostream>
#include<vector>
using namespace std;

bool isPossible(vector<int>& arr, int n, int m, int maxAllowedTime){
    int painters = 1;
    int totalTime = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > maxAllowedTime)
        {
            return false;
        }
        
        if(totalTime + arr[i] <= maxAllowedTime){
            totalTime += arr[i];
        }else{
            painters ++;
            totalTime = arr[i];
        }
    }
    return painters > m ? false : true;
}
int minTimeToPaint(vector<int>& arr, int n, int m){
    
    int sum = 0,maxValue = INT8_MIN;
    for(int i = 0; i < n; i++){
        sum += arr[i];
        maxValue = max(maxValue,arr[i]);
    }

    int start = maxValue, end = sum;  //range of possible ans
    int ans = -1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        bool isValid = isPossible(arr,n,m,mid);
        if (isValid)  //left
        {
            ans = mid;
            end = mid - 1;
        }else{    // right
            start = mid + 1;
        }
        
    }
    return ans;
}
int main(){

    vector<int> arr = {40,30,10,20};
    int n = arr.size();
    int m = 2;   // painters number

    cout << minTimeToPaint(arr,n,m) <<endl;
    
    return 0;
}