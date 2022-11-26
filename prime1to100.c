#include<stdio.h>
int main()
{
    int i,n;
    
    for(n=1; n<=300; n++)
    {
        for(i = 2; i<=n; i++)
        {
            if(n%i==0)
            break;
        }
        if(i==n)
        printf("%d\t",n);
    }
    return 0;
}