#include <stdio.h>
#include <math.h>

int main(){

  float x = 9.7;

// square root
  x = sqrt(x);
  printf("square root : %f \n", x);

// exponents
  x = pow(x, 2);
  printf("exponent : %f \n", x);

// round
  x = round(x);
  printf("rounding : %f \n", x);

// ceiling
  x = ceil(x);
  printf("ceiling : %f \n", x);

// floor
  x = floor(x);
  printf("floor : %f \n", x);

// abs
  x = abs(x);
  printf("absolute value : %f \n", x);

// log
  x = log(x);
  printf("log : %f \n", x);

// sine
  x = sin(x);
  printf("sine : %f \n", x);

// cosine
  x = cos(x);
  printf("cosine : %f \n", x);

// tangent
  x = tan(x);
  printf("tangent : %f \n", x);

return 0;
}