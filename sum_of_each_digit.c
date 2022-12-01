#include<stdio.h>
int main()
{
    int n,sum =0,rem,temp;
    printf("Ente any number ");
    scanf("%d",&n);
    temp =n;
    while(n>0)
    {
        rem = n%10;
        sum = sum+rem;
        n=n/10;
    }
    printf("sum each digit %d = %d ",temp,sum);
    return 0;
}