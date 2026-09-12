#include <stdio.h>
int change(int a);

int change(int a){
     a = 77 ;
return 0 ;
}

int main() {
int b = 22;
change(b); // the value of b is not changed 
           // because the function change() only modifies a copy of b
printf("The value of b is %d\n", b);
  return 0;
}