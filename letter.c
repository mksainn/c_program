#include<stdio.h>
int main()
{
    char ch;
    printf("Enter alphabatic character");
    scanf("%c",&ch);
    if(ch =='a' || ch =='e' ||ch =='i' ||ch =='o' ||ch =='u' ||ch =='A' ||ch =='E' ||ch =='I' ||ch =='O' ||ch =='U')
        printf("The Inputted character is a vowel");
    else
        printf("The Inputted number is  not a vowel");
    return 0;
}