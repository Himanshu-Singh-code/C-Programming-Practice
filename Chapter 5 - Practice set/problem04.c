// using recursion to find sum of n numbers :
#include <stdio.h>
int sum(int n){
 if(n == 0){
    return 0 ;
 }
    return n + sum(n-1);
}
int main() {
  int n ;
  printf("Enter the Number : ");
  scanf("%d",&n);
  printf("the sum of first %d numbers is %d ",n, sum(n));
  return 0;
}