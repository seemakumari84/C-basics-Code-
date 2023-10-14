#include<stdio.h>
int main(){
    int arr[]={1,4,6,7};
    int max=arr[0];
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    printf("%d",max);
    return 0;
}