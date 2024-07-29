#include<stdio.h>
int main(){
    int marks;
    printf("enter marks of student");
    scanf("%d",&marks);
    if(marks<30){
        printf("your grade is fucked up");
    }
    else if(marks>=30){
        printf("congratulations you are IITian");
    }
    return 0;
}