// function to print 10 times the value of input 

#include <stdio.h>

int tentimer(int* a){
    return *a = *a * 10 ;
}

int main() {
  int n = 5 ;

  printf("the value of n is %d\n",n);
  tentimer(&n);

  printf("the value of n is now %d\n",n);

  return 0;
}