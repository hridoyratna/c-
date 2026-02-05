#include<iostream>
#include<vector>
using namespace std;
int linearSearch(vector<char> ch,int size,char target){
    for(char i = 0 ; i < size;i++){
        if(ch.at(i) == target){
            return i;
        }
    }
    return -1;
}
int main(){

    vector<char> ch = {'H','R','I','D','O','Y'};
    int size = ch.size();
    int target = 'D';

    
    cout<< linearSearch(ch,size,target) <<endl;


    return 0;
}