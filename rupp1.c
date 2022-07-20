#include <stdio.h>
int main() {
  unsigned int integer_part, fraction_part, len1, len2;
  double result;
  printf("Enter float octal number:");
  scanf("%o.%n%o%n", &integer_part, &len1, &fraction_part, &len2);
  result = fraction_part * 1.0 / (1<<(len2-len1)*3);
  result += integer_part;
  printf("Decimal number is = %.6f\n",result);
  return 0;
}