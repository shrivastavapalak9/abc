#include <stdio.h>
int main()
{
    int num, temp = 0, Remainder, Quotient, i = 0, j=0, count0=0, count1=0;
    int a[10];
    printf("Enter Decimal Number\n");
    scanf("%d", &num);
    temp = num;
    while(temp)
    {
       Remainder = temp%2;
       Quotient = temp/2;
       a[i] = Remainder;
        if(Remainder == 1)
        {
            count1++;
        }
        else
        count0++;
       i++;
       temp = Quotient;
    }
    for(j=i-1; j>=0; j--)
    {
        printf("%d", a[j]);
    }
    printf("\n");
    return 0;
}
