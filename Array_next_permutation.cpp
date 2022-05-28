#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void next_permutation_number(vector<int> v){
    int idx=-1;
    int n=v.size();
    for(int i=n-1;i>0;i--){
        if(v[i]>v[i-1]){
            idx=i;
            break;
        }
    }
    if(idx==-1){
        reverse(v.begin(),v.end());
    }
    else{
        int prev=idx;
        for(int i=idx+1;i<n;i++){
            if(v[i]>v[idx-1] && v[i]<=v[prev]){
                prev=i;
            }
        }
        swap(v[idx-1],v[prev]);
        reverse(v.begin()+idx,v.end());
    }
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
}

int main(){

    vector<int> v={1,1,5};
    next_permutation_number(v);
    return 0;
}