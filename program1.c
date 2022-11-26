#include<stdio.h>
int main()
{
    char c;
    printf("Enter any character");
    scanf("%c",&c);
    if(c>='a' && c<='z' || c>='A' && c>='Z')
        printf("Inputtd character is alphabet ");
    else
        printf("Inputted Character is not alphabet");
    return 0;
}