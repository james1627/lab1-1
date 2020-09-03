// Author: James Overmoyer jpo5322@psu.edu
// Collaborator: Tanner Piotrowski tmp5779@psu.edu
// Collaborator: Kieran Murdocca kkm5754@psu.edu

#include <stdio.h>
#include <stdlib.h>
#include <readline/readline.h>

int main(void) {
  double celsius = atof(readline("Enter temperature in celsius: "));
  printf("%f° in Celsius is equivalent to %f° Fahrenheit.\n", celsius, (celsius*9/5+32)); 
  return 0;
}