#include<stdio.h>


int main(void)
{
    int binary, rem, decimal = 0, weight = 1;
    printf("Enter Binary Number\n");
    scanf("%d", &binary);
    while(binary!=0)
    {
        rem = binary%10;
        decimal = decimal + rem*weight;
        weight = weight*2;
        binary = binary/10;
    }
    printf("Number is %d\n", decimal);
    return 0;
}

