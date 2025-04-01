#include <stdio.h>

int main(){

  int x = 2;
  int y = 3;
  int sum;

// add
  sum = x + y;
  printf("%d \n", sum);
  
  // subtract
  sum = x - y;
  printf("%d \n", sum);
  
  // multiply
  sum = x * y;
  printf("%d \n", sum);
  
  // divide
  sum = x / y;
  printf("%d \n", sum);
  
  //remander
  sum = x % y;
  printf("%d \n", sum);
  
  // increment
  sum = x++;
  printf("%d \n", sum);
  
  // decrement
  sum = y--;
  printf("%d \n", sum);

}