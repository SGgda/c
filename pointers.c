#include <stdio.h>
int main (){
 int a=10,b;
 int *p,*q;
 p = &a;
 q = &b;
 *q = *p;
 printf("%d",b);
 return 0 ;
}