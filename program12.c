#include<stdio.h>
int main()
{
    
    int first,second,third, forth,fifth,n;
    printf("Enter 5 digit of any number");
    scanf("%d",&n);
    
    first = n/10000;
    n = n%10000;

    second = n/1000;
    n = n%1000;

    third = n/100;
    n = n%100;
    
    forth = n/10;

    printf("%d",first+forth);

    return 0;
}
