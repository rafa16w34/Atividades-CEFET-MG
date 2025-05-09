#include <stdio.h>
#include <math.h>

int main() {
  float x;
  printf("Defina um numero para x\n");
  scanf("%f", &x);
  
  printf("\nO valor arredondado de x eh:%f", ceil(x));
  return 0;
}
