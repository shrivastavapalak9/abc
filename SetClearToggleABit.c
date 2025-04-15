//wap to set a bit
//wap to clear a bit
//wap to toggle(compliment) a bit
//wap to find particular bit is set or clear

#include<stdio.h>
int main()
{
    int number, position, temp1, temp2, temp3, temp4, result1, result2, result3, result4;
    printf("Enter the number\n");
    scanf("%d", &number);
    printf("Enter the position\n");
    scanf("%d", &position);
    temp1 = number;
    temp2 = number;
    temp3 = number;
    temp4 = number;
    //set a bit
    printf("Before number is %d\n", number);
    result1 = temp1 | 1<<position;
    printf("After setting bit operation number is %d\n", result1);
    //toggle (compliment) a bit
    result2 = temp2 ^ 1<<position;
    printf("After toggling bit operation number is %d\n", result2);
    //clear a bit
    result3 = temp3 &~(1<<position);
    printf("After clearing bit operation number is %d\n", result3);
    //To check if a number is set or clear
    result4 = temp4&(1<<position); //or result4 = temp4 >> position & 1;
    if(result4 == 0)
    {
        printf("Bit is clear\n");
    }
    else
    printf("Bit is set\n");
    return 0;
}