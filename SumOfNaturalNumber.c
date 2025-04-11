#include<stdio.h>
int main()
{
    int num, i, sum = 0;
    printf("Enter any number greater than zero\n");
    scanf("%d", &num);
    for(i = 0; i<=num; i++)
    {
        sum = sum +i;
    }
    printf("sum = %d\n", sum);
    return 0;
}