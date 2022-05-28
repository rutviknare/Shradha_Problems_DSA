#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int m=5-1;
    vector<int> arr={3, 4, 1, 9, 56, 7, 9, 12};
    sort(arr.begin(),arr.end());
    int i=0;
    
    int min_diff=INT_MAX;
    while(i<m && i<arr.size()){
        int read=abs(arr[i]-arr[m]);
        //cout<<read<<" ";
        if(read<min_diff){
            min_diff=read;
        }
        i++;
        m++;

    }
    cout<<"Minimum Diff: "<<min_diff;
    return 0;
}