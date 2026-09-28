#include <stdio.h>
#include <string.h>

struct employee
{
 int code ;
 char name[10] ;
 float income ;

};


int main() {
struct employee e1 , e2 ,e3;

printf("Enter the code : ");
scanf("%d" , &e1.code);

printf("Enter the name : ");
scanf("%s" , &e1.name);

printf("Enter the income : ");
scanf("%f" , &e1.income);

printf("%d\n",e1.code);
printf("%s\n",e1.name);
printf("%f\n",e1.income);

printf("Enter the code : ");
scanf("%d" , &e2.code);

printf("Enter the name : ");
scanf("%s" , &e2.name);

printf("Enter the income : ");
scanf("%f" , &e2.income);

printf("%d\n",e2.code);
printf("%s\n",e2.name);
printf("%f\n",e2.income);

printf("Enter the code : ");
scanf("%d" , &e3.code);

printf("Enter the name : ");
scanf("%s" , &e3.name);

printf("Enter the income : ");
scanf("%f" , &e3.income);

printf("%d\n",e3.code);
printf("%s\n",e3.name);
printf("%f\n",e3.income);

  return 0;
}