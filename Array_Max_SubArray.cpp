#include<iostream>

using namespace std;

int max_subarray(int arr[], int size){

    int crrsum=0;
    int ans=INT_MIN;
    
    for(int i=0;i<size;i++){
        int crrsum=0;
        for(int j=i;j<size;j++){
            crrsum+=arr[j];
            ans=max(ans,crrsum);
        }
        
    }
    return ans;
    // int max_sum=INT_MIN;
    // int crr_sum=0;
    //     for(int num:arr){
    //         crr_sum+=num;
    //         max_sum=max(max_sum,crr_sum);
    //         if(crr_sum<0){
    //             crr_sum=0;
    //         }
    //     }
    //     return max_sum;

}
int main()
{
    int size;
    // cout<<"Enter the size of array:"<<endl;
    // cin>>size;
    int arr[9]={-2,1,-3,4,-1,2,1,-5,4};
    // for(int i=0;i<size;i++){
    //     cin>>arr[i];
    // }
    int sum=max_subarray(arr,9);
    cout<<"Maximum Sub Array:"<<sum;

    return 0;
}