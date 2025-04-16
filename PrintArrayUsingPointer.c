//Write a program in C to store n elements in an array and print the elements using a pointer.

#include<stdio.h>

int main(void)
{
    int arr[5];
    int *ptr = arr; // pointer to the first element of array

    printf("Enter 5 elements of an array:\n");
    for(int i = 0; i < 5; i++)
    {
        scanf("%d", ptr + i);  // same as &arr[i]
    }

    printf("5 elements of the array are:\n");
    for(int i = 0; i < 5; i++)
    {
        printf("%d\n", *(ptr + i));  // same as arr[i]
    }

    return 0;
}