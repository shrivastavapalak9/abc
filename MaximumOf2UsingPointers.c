#include<stdio.h>
int main(void)
{
    int num1, num2, *ptr1, *ptr2;
    printf("Enter 2 numbers\n");
    scanf("%d%d", &num1, &num2);
    ptr1 = &num1;
    ptr2 = &num2;
    if(*ptr1>*ptr2)
    {
        printf("num1 is greater\n");
    }
    else
    printf("num2 is greater\n");

    return 0;
}