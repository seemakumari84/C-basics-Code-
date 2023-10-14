#include<stdio.h>
int main(){
    int isSorted=1;
    int arr[]={2,4,5,6,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n-1;i++){
        if(arr[i+1]<arr[i]){
            isSorted=0;
            break;
        }
    }
    if(isSorted){
        printf("the array is sorted");
    }else{
        printf("the array is not sorted");
    }
    return 0;
}