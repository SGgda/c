#include<stdio.h>
int main(){
    int m;
    printf("enter marks between (1-100)");
    scanf("%d", &m);
    switch(m){
        case (m<30):
        print("your grade is c\n");
        break;
        case (30>=m<=70):
        print("your grade is b\n");
        break;
        case(90<=m>=100):
        print("your grade is A+\n");
        break;
        default:
        printf("entr valid marks\n");
    return 0;    

    }
}