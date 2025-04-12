#include<stdio.h>
int main()
{
    int num, i;
    unsigned long long fact=1;
    printf("Enter any number\n");
    scanf("%d", &num);
    for(i=1;i<=num;i++)
    {
        fact = fact*i;
    }
    printf("factorial = %llu\n", fact);
    return 0;
}