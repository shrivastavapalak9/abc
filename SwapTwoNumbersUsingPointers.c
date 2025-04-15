#include<stdio.h>
void swap(int *ptr1, int *ptr2);
int main(void)
{
    int a, b, temp;
    printf("Enter 2 numbers\n");
    scanf("%d %d", &a, &b);
    swap(&a, &b);
    printf("After swapping, a = %d, b = %d\n", a, b);
    return 0;
}

void swap(int *ptr1, int *ptr2)
{
    int temp;
    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}