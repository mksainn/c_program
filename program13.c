#include<stdio.h>
int main()
{ 
    int num,first,second,thirdi,total;
    printf("Enter any 3 digit number");
    scanf("%d",&num);
     
    first = num/100;
    num = num%10,0;
    
    second = num/10;
    third = num/10;

    total = first + second + third;
    printf("%d",total);
    return 0;
}
