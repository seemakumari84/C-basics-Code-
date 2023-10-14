#include<stdio.h>
int main(){
    int arr[]={2,4,6,8,9};int n=sizeof(arr)/sizeof(arr[0]);
    int evenSum=0;int oddSum=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            evenSum++;
        }else{
            oddSum++;
        }
    }
    printf("%d\n",evenSum);
    printf("%d",oddSum);

    return 0;
}