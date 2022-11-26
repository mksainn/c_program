#include<stdio.h>
int main()
{
    int num,rem;
    printf("Enter any number");
    scanf("%d",&num);
    rem = num%2;
    switch(rem)
    {
        case 0:
            printf("Number is even\n");
            break;
        default:
            printf("Number is odd\n");
    }
    return 0;
}