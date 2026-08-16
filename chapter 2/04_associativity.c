#include <stdio.h>
 int main() {
   int a =3 ;
   float b = 4.0;
   int c = 5 ;

   printf("the value is %f", a*c/b); 
   /** this is an example of associativity in c language -
    the order of operations is from left to right */

    // a*b/c + 7 (a*b/c is evaluated first and then 7 is added to the result)
  return 0;
}

// use paranthesis to change the order of operations :