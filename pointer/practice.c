#include<stdio.h>
int main()
{
    /*int a;
    a=5;
    int *p;
    p = &a;
    int b;

    printf("%d\n",a);
    printf("%d\n",p);
    printf("%d\n",&a);
    printf("%d\n",&p);
    printf("%d\n",*p);
    printf("%d\n",&b +1);*/

    int a=10;
    int *p;
    p = &a;
    printf("Address of a = %d",p);
    printf("size of of a = %d",sizeof(int));
    printf("Address of a = %d",p+2);

    return 0;
}