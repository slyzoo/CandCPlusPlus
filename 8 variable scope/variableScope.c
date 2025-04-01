#include <stdio.h>
// if its outside any functions, its global meaning any function can get it

int main (){

// if its inside it means only this function can get it

  int age = 18;

  printf("%d", age);

return 0;
}