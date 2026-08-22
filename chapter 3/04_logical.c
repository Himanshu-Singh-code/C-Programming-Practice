#include <stdio.h>
 int main() {
  int a = 0 ;
  int b = 1 ;
  // and operator : both 1 - return 1 , else return 0
  printf("the value of a and %d\n", a&&b);

  
  // or operator : either both have 1 or one have 1 - returns 1 , else returns  0
  printf(" the value of a or b is %d\n", a||b);

  // not operator : interchanges 1 to 0 and vice-versa 
  printf("the value of not(a) is %d\n", !a);
    printf("the value of not(b) is %d\n", !b);

    // if function
    if(a && b){
        printf("both are true");
    }
    else{
        printf("one is false");
    }
  return 0;
}