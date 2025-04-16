#include<stdio.h>

long Sum(long *n1, long *n2);

int main(void)
{
    long num1, num2, sum;
    printf("Enter 2 numbers\n");
    scanf("%ld%ld", &num1, &num2);
    sum = Sum(&num1, &num2);
    printf("Sum = %ld\n", sum);
    return 0;
}

long Sum(long *n1, long *n2)
{
    long sum;
    sum = *n1+*n2;
    return sum;

}