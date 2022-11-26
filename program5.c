#include<stdio.h>
int main()
{
    int a,cout,b;
    printf("Enter a number");
    scanf("%d",&a);
    printf("Enter b number");
    scanf("%d",&b);

    cout=a;
    a=b;
    b=cout;

    printf("\n a = %d \n b = %d",a,b);
    return 0;
}