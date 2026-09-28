#include <stdio.h>
#include <string.h>

 typedef struct  employee
{
 int code ;
 char name[10] ;
 float income ;

} emp ;


int main() {
  emp e1 , e2 , e3;
  e1.code = 2000 ;
strcpy(e1.name , "alex");
e1.income = 30000 ;


printf("%d\n",e1.code);
printf("%s\n",e1.name);
printf("%f\n",e1.income);

typedef int himanshu ;

himanshu a = 88 ;

printf("a is %d" , a);
  return 0;
}

