#include<stdio.h>
#include<limits.h>
int main(){
    int arr[]={3,6,8,5,2};int n=sizeof(arr)/sizeof(arr[0]);
    int firstMax=INT_MIN;int secMax=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>firstMax){
            secMax=firstMax;
            firstMax=arr[i];
        }else if(arr[i]>secMax&&arr[i]!=firstMax){
            secMax=arr[i];
        }
    }printf("%d\n",firstMax);
    printf("%d",secMax);
}