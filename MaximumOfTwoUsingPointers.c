#include<stdio.h>

void MaximumOfTwo(int *num1, int *num2);

int main(void)
{
    int num1, num2;

    printf("Enter num1 and num2\n");
    scanf("%d%d", &num1, &num2);
    MaximumOfTwo(&num1, &num2);

    return 0;
}

void MaximumOfTwo(int *num1, int *num2)
{
    if(*num1 > *num2)
    {
        printf("num1 is greater\n");
    }
    else
    printf("num2 is greater\n");
}