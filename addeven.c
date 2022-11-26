#include<stdio.h>
int main()
{
    int num,count=0;
    puts("how far do you want to sum of even number");
    scanf("%d",&num);
    for(int i=1; i<=num; i++)
    {
        if(i%2==0)
        {
            count = count+i;
        }
    }
    printf("sum of all even number from 1 to %d = %d ",num,count);
    return 0;
}