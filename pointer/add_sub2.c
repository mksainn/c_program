#include <stdio.h>

void update(int *a,int *b) {
    // Complete this function   
    int num,num2; 
    num = *a + *b;
    if(*a>*b)
        num2 = *a - *b;
    else
        num2 = *b - *a;
    *a = num;
    *b = num2;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
