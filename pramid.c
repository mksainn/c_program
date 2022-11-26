/*          Pyramid pattern
              *
             ***
            *****
           *******
          *********
*/
#include<stdio.h>
int main()
{
    int n=5;
    for(int i = 1; i<=n; i++ )
    {
        for(int k = 1; k<=5-i; k++)
        {
            printf(" ");
        }   
        for(int j = 1; j<=i; j++)
        {
            printf("*");
        for (int l=1; l<n-1)
        }
        printf("\n");\
    }

    return 0;
}
