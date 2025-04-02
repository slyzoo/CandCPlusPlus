#include <stdio.h>

int main(){

// C = 2 * PI * r
  float circumference = 0;
  const float PI = 3.14159;
  float radius;

  printf("What is the Radius?");
  scanf("%f", &radius);

  circumference = 2 * PI * radius;

  printf("Cirumference is : %f", circumference);

return 0;
}