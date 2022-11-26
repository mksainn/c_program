/*Stars Pattern*/
#include<stdio.h>
int main()
{
    printf("pattern 1\n");
    for(int i=1;i<=5;i++)
    {
        for(int j=1; j<=5; j++)
        {
            printf("*");
        } 
        printf("\n");
    }
    printf("pattern 2\n");
   for(int i=1;i<=5;i++)
    {
        for(int j=1; j<=i; j++)
        {
            printf("*");
        } 
        printf("\n");
    }    
    printf("pattern 3\n");
    for(int i=1;i<=5;i++)
    {
        for(int j=5; j>=i; j--)
        {
            printf("*");
        } 
        printf("\n");
    }  
    printf("pattern 4\n");
    for(int i=5;i>=1;i--)
    {
        for (int k=1;k<=i-1; k++)
        {
            printf(" ");
        }
        
        for(int j=5; j>=i; j--)
        {
            printf("*");
        } 
        printf("\n");
    }
    printf("Pattern 5\n");
    for(int i=1;i<=5;i++)
    {
        for (int k=1;k<i; k++)
        {
            printf(" ");
        }
        
        for(int j=5; j>=i; j--)
        {
            printf("*");
        } 
        printf("\n");
    }
    printf("pattern 6\n");
    printf("Pattern 7\n");
    printf("Pattern 8\n");
    

    return 0;
} 