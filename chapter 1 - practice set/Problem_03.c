// Celcius to Fahrenheit 

#include <stdio.h>

 int main() {
  float c , f ;
  printf("enter celcius temperature\n");
    scanf("%f", &c);
  f= (9.0/5.0)*c + 32 ;
  printf("the temprerature in Fahrenheit is %f", f) ;

  
  return 0;
}