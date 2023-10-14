#include<stdio.h>
void conquer(int arr[],int low,int mid,int high){
    int i,j,k,mergeD[];
    while(i<=mid &&j<=high){
        if(arr[i]<=arr[j]){
            mergeD[k++]=arr[i++];
        }else{
            mergeD[k++]=arr[j++];
 
        }
    }while(i<=mid){
        mergeD[k++]=arr[i++];
    }
    while(i<=mid){
        mergeD[k++]=arr[i++];
    }
    for(int i=low;i<=high;i++){
        arr[i]=mergeD[i];
    }
}
void divide(int arr[],int low,int high){
    int mid;
    if(low!=high){
        mid=low+(high-low)/2;
        divide(a,low,mid);
        divide(a,mid+1;high);
        mergeD(arr,low,mid,high);
    }

}

int main(){
    int arr[],i,n,low,high;
    printf("enter array size");
    scanf("%d",&n);
    printf("\n enter elements of array");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    low=0;

    high=n-1;
    divide(a,low,high);
    printf("\narray after merge sort");
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    return 0;
}

