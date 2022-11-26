#include<stdio.h>
#include<math.h>

int main()
{
    int a,b,c,x,y,z;
    printf("Entr three length of a triangle");
    scanf("%d %d %d", &a,&b,&c);
    x = sqrt((a*a)+(b*b));
    y = sqrt((b*b)+(c*c));
    z = sqrt((c*c)+ (a*a));

    if(c==x||a==y||b==z)
        printf("\n Right angle triangle");
    else
        printf("\n Not a right triangle");
    return 0;
}