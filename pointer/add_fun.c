#include<stdio.h>
void addition(int x, int y, int *z){
    *z = x+y;
}
int main()
{
    int a,b,c;
    printf("Enter any two number");
    scanf("%d%d",&a,&b);
    addition(a,b,&c);
    printf("%d + %d = %d\n",a,b,c);
    return 0;
}