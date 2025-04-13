#include <stdio.h>
int main()
{
    int num, temp = 0, Quotient, Remainder, i = 0, j=0;
    int a[10];
    printf("Enter Decimal Number\n");
    scanf("%d", &num);
    temp = num;
    while(temp)
    {
       Quotient =  temp/2;
       Remainder = temp%2;
       a[i] = Remainder;
       i++;
    }
    for(j=i-1; j>=0; j--)
    {
        printf("a[%d] = %d\n", j, a[j]);
    }
    return 0;
}