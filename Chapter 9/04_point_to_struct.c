#include <stdio.h>


struct employee
{
 int code ;
 char name[10] ;
 float income ;

};

int main() {
struct employee e1 ;
e1.code = 56 ;
struct employee *ptr ;
 
ptr = &e1 ;

printf("%d\n" , e1.code);
printf("%d\n" , (*ptr).code);
printf("%d\n" , ptr->code);

  return 0;
}