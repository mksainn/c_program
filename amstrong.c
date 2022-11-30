#include<stdio.h>
int main()
{
    int n,rem,sum=0,temp;
    puts("Enter any number");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        rem = n%10;
        sum = sum+rem*rem*rem;
        n = n/10;
    }
    if(temp==sum)
    {
        printf("your given number is amstrong number");
    }
    else
    {
        printf("your given number is not an amstrong number");
    }
    return 0;
}