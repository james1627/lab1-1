#include <stdio.h>
#include <stdlib.h>
#include <readline/readline.h>

int main(void) {
  double celsius = atof(readline("Enter temperature in celsius: "));
  printf("%f in Celsius is equivalent to %f in Fahrenheit.\n", celsius, (celsius*9/5+32));
  return 0;
}