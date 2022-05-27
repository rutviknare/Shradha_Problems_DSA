#include<iostream>

using namespace std;

struct Pair
{
    int min;
    int max;
};

Pair getminmax(int arr[], int size){
    struct Pair minmax;
    if(size==1){
        minmax.min=arr[0];
        minmax.max=arr[0];
        return minmax;
    }
    if(arr[0]>arr[1]){
        minmax.max=arr[0];
        minmax.min=arr[1];
    }
    else{
        minmax.max=arr[1];
        minmax.min=arr[0];
    }

    for(int i=2;i<size;i++){
        if(arr[i]>minmax.max){
            minmax.max=arr[i];
        }
        else if(arr[i]<minmax.min){
            minmax.min=arr[i];
        }
    }
    return minmax;
}

int main(){
    int arr[9]={9,8,7,6,5,4,3,2,1};
    int n=9;
    struct Pair minmax=getminmax(arr,n);
    cout<<"minimum Element:"<<minmax.min<<endl;
    cout<<"maximum Element:"<<minmax.max<<endl;
    return 0;
}