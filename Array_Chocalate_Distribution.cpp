#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int m=7-1;
    vector<int> arr={12, 4, 7, 9, 2, 23, 25, 41, 30, 40, 28, 42, 30, 44, 48, 43, 50};
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