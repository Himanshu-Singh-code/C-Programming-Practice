// program to check if a no is prime or not

#include <stdio.h>
 int main() {
int n ;
printf("enter the no to check if it is prime or not :");
scanf("%d",&n);
int prime = 0;
if(n<=1){
    printf("the number is not prime.");
}
else{
for(int i = 2; i < n; i++){
    if(n % i == 0){
        prime = 1;
        break;
    }
}
if(prime == 1){
    printf("The number is not prime.");
} else {
    printf("The number is prime.");
} }
  return 0;
}