#include<stdio.h>
int main()
{
    int num1, num2,num3;
    scanf("%d",num1);
    scanf("%d",num2);

    if(num1==5 &&num2==6)
    {
        num3=num1*num2+6;
        printf("\nSpecial tax \n %d",num3);
    }
    else if (num1 ==4 && num2 ==3)

    {
        num3 = num1 *num2 +2;
        printf("\nSpecial tax \n %d",num3);
    }
    else
    {
        printf("Wrong Input");
    }
    return 0;
}