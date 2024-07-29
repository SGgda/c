#include<stdio.h>
int main(){
    int n;
    int p=1;
    printf("enter the no. whose factorial is to be found out:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        p=p*i;
    }printf("%d",p);
}