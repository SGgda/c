#include<stdio.h>
int main()
{
    int n;
    printf("enter array limit:");
    scanf("%d",&n);
    int a[n],i,j,s=0;
    for (i=0;i<n;i++)
    {
       printf("enter array elements");
       scanf("%d",&a[i]);  
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            
            if(a[i]>a[j])
            {
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
            }

        }
        for(i=0;i<n;i++)
        {

       //5 printf("%d",a[i]);
        }
        for(j=0;j<n;j++)
        {
            if(a[j]==a[j+1])
            {
                a[j]=a[j+1];
                n=n-1;

            }
            }
            for(int k=0;k<n;k++)
            {
               s=s+a[k];
            }
            printf("%d",s);
        }

        
    



