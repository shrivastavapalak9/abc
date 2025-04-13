#include<stdio.h>

int Reverse(int number);

int main(void)
{
    int num, reverse;

    printf("Enter Number to reverse\n");
    scanf("%d", &num);
    reverse = Reverse(num);
    printf("Reversed number is %d\n", reverse);
    return 0;
}

int Reverse(int number)
{
    int remainder, reverse = 0;
    while(number!=0)
    {
        remainder = number%10; //last digit of number
        reverse = reverse*10+remainder; //generate a number with remainder as last digit
        number = number/10;
    }
    return reverse;

}