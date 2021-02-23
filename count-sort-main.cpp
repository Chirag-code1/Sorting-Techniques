//Count sort cpp
#include <iostream>
using namespace std;

void countsort(int arr[], int n){
    int k=arr[0],i;
    for(i=0;i<n;i++){
        k=max(k,arr[i]);
    }
    
    
    
    int count[9]={0};
    for(i=0;i<n;i++){
        count[arr[i]]++;
    }
    
    for(i=1;i<=k;i++){
        count[i]+=count[i-1];
    }
    
    int brr[n];
    
    for(i=n-1;i>=0;i--){
    brr[--count[arr[i]]]=arr[i];
    }
    
    for(i=0;i<n;i++){
        arr[i]=brr[i];
    }
    
}





int main(){
    int arr[]={1,3,2,3,4,1,6,4,3};
    int i;
    countsort(arr,9);
    for(i=0;i<9;i++){
        cout<<arr[i]<<endl;
    }
}