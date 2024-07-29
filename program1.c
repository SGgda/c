//program to print true if a number is greater than 9 and less than 100
#include<stdio.h>
#include<math.h>
int main(){
    int x;
    printf("enter a no:");
    scanf("%d",&x);
    printf("%d \n",x>9 && x<100);
    return 0;
}