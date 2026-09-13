// using recursion for fibonacci series ;
#include <stdio.h>
int fibonacci(int n){
    if (n == 1 || n == 2){
        return n-1 ;
    }
return fibonacci(n-1) + fibonacci(n-2) ;
}
int main() {
   int n  ;
   printf("enter n : ");
   scanf("%d",&n);
   printf("fibonacci value is %d",fibonacci(n));
  return 0;
}