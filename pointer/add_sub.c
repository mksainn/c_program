#include<stdio.h>
int main()
{
    int a,b,c,*d,*e;
    d = &a;
    e = &b;
    scanf("%d%d",&a,&b);
    c = *d + *e;
    printf("%d + %d = %d\n",a,b,c);
    c = *&a + *&b;
    printf("%d + %d = %d\n",a,b,c);

    return 0;
}