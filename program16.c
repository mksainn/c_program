#include<stdio.h>
#include<conio.h>
#include<dos.h>

int main()
{
    int i;
    clrscr();
    
    textcolor(GREEN);
    backgroundcolor(RED);
    for(i = 1; i<=50; i++)
    {
        printf("hello \3");
        delay(100);

    }
    return 0;
}