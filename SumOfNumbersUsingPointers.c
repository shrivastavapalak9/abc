#include<stdio.h>
int main(void)
{
    int sum, a, b;
    int *ptr1, *ptr2;
    ptr1 = &a;
    ptr2 = &b;    printf("Enter 2 numbers\n");
    scanf("%d%d", &a, &b);
    sum = *ptr1 + *ptr2;
    printf("Sum = %d\n", sum);
    
}