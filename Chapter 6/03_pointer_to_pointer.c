#include <stdio.h>
 int main() {

int i = 45 ;
int* j = &i ;
int** k = &j ;

printf("the value of i is %d\n",i);
printf("the value of j is %d\n",*(&i));
printf("the value of k is %d\n",**(&j));

  return 0;
}