#include <stdio.h>

int sum(int* a , int* b){
  
    return *a+*b ;
}

float avg(int* a, int* b , int* c){
    
  return (*a+*b+*c)/3.0 ;
}


int main() {
int x = 10 , y = 20 , z = 30 ;
  printf("sum of two no is %d\n",sum(&x,&y));
printf("avg of three no is %f\n", avg(&x,&y,&z));

  return 0;
}