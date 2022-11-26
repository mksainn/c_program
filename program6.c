#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter a number");
    scanf("%d",&a);
    printf("Enter b number");
    scanf("%d",&b);
    a = a+b;
    b = a-b;
    a = a-b;
    
    printf("\n a = %d \n b = %d\n",a,b);
    
    //Second method to swap two number
    int x = 10;
    int y = 20;
    printf("Uisng bitwise operator\n");

    x = x^y;
    y = x^y;
    x = x^y;

    printf("\n x = %d \n y = %d",x,y);

    // Third method to swap two number
    int i = 10;
    int j = 20;
    int cout;
    printf("Using third variable\n")

    cout=i;
    i=j;
    j=cout;

    printf("\n i = %d \n j = %d",i,j);
    return 0;
}