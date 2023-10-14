#include<stdio.h>
int main(){
    int arr[]={3,6,1,8,5,9};
    int n=sizeof(arr)/sizeof(arr[0]);
  int i,j;
    for(i=0,j=n-1;i<j;i++,j--){
        int  temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    return 0;
}