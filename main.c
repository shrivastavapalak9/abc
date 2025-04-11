#include <stdio.h>
int main()
{
    double a, b, product;
    printf("Enter 2 numbers\n");
    scanf("%lf %lf", &a, &b);
    product = a*b;
    printf("Product is %.2lf\n", product);
    return 0;
}