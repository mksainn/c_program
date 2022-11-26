#include<stdio.h>
int main()
{
    // char item;
    // puts("Enter any character");
    // item = getchar();
    // putchar(item);

    // char item[20];
    // puts("Enter employ full name");
    // gets(item);
    // puts(item);

    char mst;
    char cityname[20];
    puts("Enter marital status(Y/N)");
    mst = getchar();
    
    cityname = gets();
    puts(cityname);

    return 0;
}