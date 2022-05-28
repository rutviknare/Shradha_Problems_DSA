#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;
vector<int> missing_repeat(vector<int> A){
    map<int,int> map;
    vector<int> res;
    for(auto i:A){
        map[i]++;
    }
    for(auto i:map){
        if(i.second>=2){
            res.push_back(i.first);
            break;
        }
    }
    sort(A.begin(),A.end());
    for(int i=1;i<=A.size();i++){
        if(count(A.begin(),A.end(),i)==0){
            res.push_back(i);
            break;
        }
    }
    return res;
}
int main(){

    vector<int> res={4, 3, 6, 2, 1, 1};
    vector<int> ans=missing_repeat(res);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}