#include<stdio.h>
int main(void)
{
    int num1, num2, sum;
    int *ptr1, *ptr2;
    printf("Enter two numbers\n");
    scanf("%d%d", &num1, &num2);
    ptr1 = &num1;
    ptr2 = &num2;
    sum = *ptr1+*ptr2;
    printf("Sum = %d\n", sum);
}