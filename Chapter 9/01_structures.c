#include <stdio.h>
#include <string.h>

struct employee
{
 int code ;
 char name[10] ;
 float income ;

};


int main() {
struct employee e1 , e2 ;
e1.code = 2000 ;
strcpy(e1.name , "alex");
e1.income = 30000 ;


printf("%d\n",e1.code);
printf("%s\n",e1.name);
printf("%f\n",e1.income);


  return 0;
}