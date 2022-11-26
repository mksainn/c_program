#include<stdio.h>
#include<math.h>
int main()
{
    int a,n;
    printf(" Enter any number ");
    scanf("%d",&n);
    a = sqrt(n);
    if(a-(n*n)==0)
        printf("Your enter perfect squre ");
    else
        printf("It is not a perfect square root");
        return 0;
}