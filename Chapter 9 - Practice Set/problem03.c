#include <stdio.h>

typedef struct complex 
{
int real ;
int imaginary ;
} c_no;


 int main() {
   c_no c = { 1,2} ;
    printf("The value of is %d + %di \n" ,c.real , c.imaginary);


  return 0;
}
