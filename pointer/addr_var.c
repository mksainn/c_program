#include<stdio.h>

int main()
{
    int a = 12;
    float b = 24.25;
    char c = 'a';

    printf("Address of a variable = %u\n",&a);
    printf("Address of b variable = %u\n",&b);
    printf("Address of c variable = %u\n",&c);
    return 0;
}