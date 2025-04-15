#include<stdio.h>
int main(void)
{
    char string[100];
    char temp;
    int length = 0;
    printf("Enter a string\n");
    scanf("%s", string);
    while(string[length]!='\0')
    {
        length++;
    }
    for(int i = 0; i<length/2; i++)
    {
        temp = string[i];
        string[i] = string[length-1-i];
        string[length-1-i] = temp;
    }
    printf("length of string is %d\n", length);
    printf("String now is %s\n", string);
    return 0;
}