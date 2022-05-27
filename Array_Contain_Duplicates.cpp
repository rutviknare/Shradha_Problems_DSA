#include<iostream>
#include<map>
#include<vector>
using namespace std;

int main(){

    vector<int> nums={1,2,3,1,2,3};
    map<int,int> map;
    for(auto i:nums){
        map[i]++;
    }
    for(auto i:map){
        if(i.second>=2){
            cout<<i.first<<" ";
        }
    }
    return 0;
}