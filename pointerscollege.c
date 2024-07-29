#include<stdio.h>
int main()
{
    int a=10,b=9;
    int*p;
    int**q;
    p=&a;
    q=&p;
    printf("%d\n",**q);
    printf("%d\n",*p);
    printf("%d\n",*q);
    printf("%d\n",p);
    printf("%d\n",a);
    printf("%d\n",q);
    return 0;
}