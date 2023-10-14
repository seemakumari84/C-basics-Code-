#include <stdio.h>

int main() {
    // Write C code here
    int arr[]={2,7,8,5,3};int sum=0;
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }int avg=(sum)/n;
    printf("%d",avg);

    return 0;
}