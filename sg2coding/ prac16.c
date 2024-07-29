#include<stdio.h>
int main(){
    int n;
    int d;
    printf("enter a number:");
    scanf("%d",&n);
    for(int i=1;i<=10;i++){
        d=i*n;
        printf("%d * %d = %d",n,i,d);
    }
    return 0;
    }

