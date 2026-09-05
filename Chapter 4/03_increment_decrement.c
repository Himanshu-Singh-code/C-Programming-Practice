#include <stdio.h>
 int main() {
  // ++i and i++ are not same ;
// ++i first increment then prints 
// i++ first print and then increment 
 int i = 5;
 printf("the value i is %d\n",i);

 i += 5 ;
printf("the value i is %d\n",i);

i++;
printf(" the value of i is %d\n",i++);
++i;
printf(" the value of i is %d\n",++i);
  return 0;
}