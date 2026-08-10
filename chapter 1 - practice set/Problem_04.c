// Simple interest 

#include <stdio.h>
 int main() {
   float p ;
   int  r , t ;
   printf("enter p");
   scanf("%f", &p);
   printf("enter r");
   scanf("%d", &r);
   printf("enter t");
   scanf("%d", &t);

   printf("the simple interest is %f",(p*r*t)/100);
   
  return 0;
}