#include<stdio.h>//program to calculate the average of three nos. 
#include<math.h>
int main(){
    int x;
    printf("enter first no: ");
    scanf("%d",&x);
    int y;
    printf("enter second no: ");
    scanf("%d",&y);
    int z;
    printf("enter third no: ");
    scanf("%d",&z);
    int sum;
    float avg;
    sum=x+y+z;
    avg=sum/3;
    printf("%f \n",avg);
    return 0;


}