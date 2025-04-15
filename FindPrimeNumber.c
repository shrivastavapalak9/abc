#include<stdio.h>
int main(void)
{
    int number, count = 0;
    printf("Enter any number greater than one\n");
    scanf("%d", &number);

        for(int i = number; i>=1; i--)
        if(number%i == 0)
        {
            count++;
        }
        if(count == 2)
    printf("Number is prime number\n");
    else
    printf("Number is not a prime number\n");

    
    return 0;
}