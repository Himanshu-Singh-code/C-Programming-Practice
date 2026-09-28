#include <stdio.h>
#include <string.h>

struct employee
{
 int code ;
 char name[10] ;
 float income ;

};


int main() {
struct employee facebook[100] ;

facebook[0].code = 100 ;
facebook[1].code =  77 ;
// all the way to 100 : 

struct employee himanshu = { 100 , "Himanshu" , 700000.00} ;
printf("%d\n" , himanshu.code);
printf("%s\n" , himanshu.name);
printf("%f\n" , himanshu.income);
  return 0;
}
