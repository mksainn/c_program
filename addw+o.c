#include<stdio.h>
int add(int a, int b)
{
    for(int i=1; i<=b; i++)
    a++;
    return a;
}
int main()
{
    int num1, num2;
    printf("Enter first number");
    scanf("%d",&num1);
    printf("Enter second number");
    scanf("%d",&num2);
    int c = add(num1, num2);
    printf("Total = %d",c);
    return 0;
}