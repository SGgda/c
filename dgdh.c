#include <stdio.h>
#include <math.h>
#include <string.h>
float num1,num2;float add,sub,div,mul;
int ch,x;int fact=1;
char str[5];
void main()
{
  printf("Calculator\nPress anything to continue\n");
getchar();
  for(;;)
    {
      printf("What you want to do\n 1-->Add \n 2-->Substract \n 3-->Divide \n 4-->Multiply\n 5-->Factorial \n 6-->Odd/Even\n");
      scanf("%d",&ch);
      if(ch==5||ch==6)
      {
        printf("Enter a number\n");
        scanf("%f",&num1);
        switch(ch){
          case 5:
        for(int i=(int)num1;i>0;i--)
          {
           fact=fact*i;
          }
            printf("Factorial:-%d\n",fact);
        break;
          case 6:
          if((int)num1%2==0)
            printf("Even\n");
          else
            printf("Odd\n");
          break;
      }
      }
      else{
      
  printf("Enter a numbers: \n");
  scanf("%f",&num1);
  printf("Another number: \n");
  scanf("%f",&num2);
  
  switch(ch)
    {
      case 1:
        
        add=num1+num2;
        if (add == (int)add) {
        printf("Addition: %d\n", (int)add);
         }     
        else 
        {
        printf("Addition: %0.3f\n",add);
      
        }
      break;
      case 2:
       sub=num1-num2;
        if (sub == (int)sub) {
        printf("Substraction: %d\n", (int)sub);
         }     
        else 
        {
        printf("Substraction: %0.3f\n",sub);
      }
      break;
      case 3:
       div=num1/num2;

        printf("Divison: %0.3f\n",div);
      break;
      case 4:
       mul=num1*num2;
        printf("Multiplication: %0.3f\n",mul);
      break;
    }
      }
      printf("run again? ");
      scanf("%s",str);
        if(strcasecmp(str,"Yes")==0)
        continue;
      else 
        break;
}
}