#include<stdio.h>
int main()
{
    int year;
    printf("Enter any year");
    scanf("%d",&year);
    if(year%400==0){
        printf("you entered leap year");
    }
    else if(year%100==0){
        printf("This not a leap year");
    }
    else if(year%4==0){
        printf("you entered leep year");
    }
    else{
        printf("This is not a leep year");
    }
    return 0;


}