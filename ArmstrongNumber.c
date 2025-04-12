//eg. 153

#include<stdio.h>
int power(int base, int power);

int main()
{
    int num, count =0, reminder = 0, result = 0, temp, temp1;
    printf("Enter any number\n");
    scanf("%d", &num);
    temp = num;
    temp1 = num;
    //find total number of digits
    while(temp>0)
    {
        temp = temp/10;
        count ++;
    }
    printf("count = %d\n", count);
    //check if number is Armstrong Number
    while(temp1>0)
    {
        reminder = temp1%10;
        temp1 = temp1/10;
        result+= power(reminder, count);
    }
    if(result == num)
    {
        printf("Number is Armstrong Number\n");
    }
    else
    {
        printf("Number is not an Armstrong Number\n");
    }
  
    return 0;
}

int power(int base, int power)
{
    int i, result = 1;
    for(i = 0; i<power; i++)
    {
        result*= base;
    }
    printf("result = %d\n", result);

    return result;
}