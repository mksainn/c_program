#include<stdio.h>
int main()
{
    int n,i=1,fact=1;
    printf("Enter any number");
    scanf("%d",&n);
    while(i<=n)
    {
        fact= fact*i;
        i++;
    }
    printf("Factorial of %d is %d\n",n,fact);
    return 0;
}