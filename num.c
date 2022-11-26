#include<stdio.h>
int main()
{
    int num;
    scanf("%d",&num);
    if(num==7)
    {
        num = num*7-4;
        printf("%d",num);
    }
    else if (num==10)
    {
        num = num*5+3;
        printf("%d",num);
    }
    else
    {
        printf("Wrong number");
    }
    return 0;
}