#include<stdio.h>
#include<string.h>

int main(void)
{
    char sentence[] = "My name is Palak";
    char reversed[100];
    int length;
    length = strlen(sentence); 
    for(int i = 0; i<length; i++)
    {
        reversed[i] = sentence[length-1-i];
    }
    reversed[length] = '\0';
    printf("Reversed sentence is %s\n", reversed);

    return 0;
}