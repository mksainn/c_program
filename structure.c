#include<stdio.h>
#include<string.h>
struct student
{
    int id; 
    int marks;
    char fav_char;
    char name[50];
};
struct student harry, ravi, shubham;
void print(){
    printf("%s",harry.name);
}
int main()
{
    
    harry.id = 1;
    ravi.id = 2;
    shubham.id = 3;
    harry.marks = 88;
    ravi.marks = 99;
    shubham.marks = 77;
    harry.fav_char = 'p';
    ravi.fav_char = 'p';
    shubham.fav_char = 'p';
    strcpy(harry.name,"Harry potter student of the year");
    printf("harry details \n harry id is %d \nharry got %d marks \nharry fav_char is %c\n",harry.id, harry.marks, harry.fav_char);
    printf("\nravi details \n ravi id is %d \nravi got %d marks \nravi fav_char is %c\n",ravi.id, ravi.marks, ravi.fav_char);
    printf("\nshubham details \n shubham id is %d \nshubham got %d marks \nshubham fav_char is %c\n",shubham.id, shubham.marks, shubham.fav_char);
    printf("harry's name is : %s\n",harry.name);
    print();
    return 0;
}