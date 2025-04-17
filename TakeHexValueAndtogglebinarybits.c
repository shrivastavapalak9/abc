#include<stdio.h>

int main(void)
{
    int hex, position, result;
    printf("Enter hex value for toggling\n");
    scanf("%i", &hex);
    printf("Enter position of bit to toggle\n");
    scanf("%d", &position);
    result = hex^(1<<position);
    printf("Result = %d\n", result);
    return 0;
}