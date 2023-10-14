#include<stdio.h>
int main(){
    int m;double factorial=1;
    printf("enter a num");
    scanf("%d",&m);
    
    for(int i=1;i<=m;i++){
        factorial*=i;
    }
    printf("factorial of %d is %lf",m,factorial);
    return 0;
}