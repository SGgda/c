#include<stdio.h>
#include<stdio.h>
int main()
{
    int tot_mins,h,m;
    printf("enter total minutes:");
    scanf("%d",&tot_mins);
    h=tot_mins/60;
    m=tot_mins%60;
    printf("hours is %d",h);
    printf("minutes is %d",m);
}