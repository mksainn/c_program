#include<stdio.h>
int main()
{
   int n,sum = 0 ,newnum;
   printf("how many number you want to enter\n ");
   scanf("%d",&n);
   printf("Enter %d number\n",n);
   for(int i = 1; i<=n; i++)
   {
       printf("Enter the number %d = ",i);
       scanf("%d",&newnum);
       sum = sum+newnum;
   }
   printf("sum of number = %d ",sum);
    return 0;
}