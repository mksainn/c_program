#include<stdio.h>
int main()
{
    int num, first,  second, third, reverse,n;
    printf("Enter any 3 digit number");
    scanf("%d",&num);
    
    first = n/100;
    n = n%100;

    second = n/10; 
    third = n%10;

    reverse = (third*100) + (second*10) + first;
    printf("%d\n",reverse);
    return 0;
} 