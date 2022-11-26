#include<stdio.h>
#include<conio.h>
int main()
{
    char str[10];
    int i;
    printf("/n Enter string");
    gets(str);
    for(i=0;str[i]!='/0';i++)
    {
        if(str[i]>='A' && str[i]<='Z')
        str[i] = str[i] - 32;
       
    }
    printf("/n Result = %s",str);
    return 0;
}