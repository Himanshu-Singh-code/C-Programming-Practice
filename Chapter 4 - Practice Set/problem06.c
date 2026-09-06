#include <stdio.h>
 int main() {
int i ;
int n ;
printf("enter the no to find the facrorial :");
scanf("%d",&n);
int fact = 1 ;
i=1;
while(i<=n){
    fact=fact*i;
    i++;
}
    printf("the factorial  is %d\n",fact);
  return 0;
}