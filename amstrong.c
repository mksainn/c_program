#include<stdio.h>
int main()
{
    int num,rem,arm=0,c;
    printf("Enter any number");
    scanf("%d",&num);
    c=num;
    while(num>0)
    {
        rem = num%10;
        arm = (rem* rem*rem) + arm;
        num = num/10;
    }
    if(arm == c)
    {
        printf("Amstrong Number");
    }
    else
    {
        printf("not a Amstrong number");
    }
    return 0;
}