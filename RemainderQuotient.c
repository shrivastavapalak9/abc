#include <stdio.h>
int main()
{
  int dividend, divisor, quotient, remainder;
  printf("Enter Dividend \n");
  scanf("%d", &dividend);
  printf("Enter Divisor \n");
  scanf("%d", &divisor);
  remainder = dividend%divisor;
  printf("Remainder = %d\n", remainder);
  quotient = dividend/divisor;
  printf("Quotient = %d\n", quotient);
  return 0;
}