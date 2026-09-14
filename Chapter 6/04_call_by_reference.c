#include <stdio.h>
// we need to use addresses to change the values of x and y :
int sum(int a , int b);

int sum(int a , int b){
    a = 6 ;
    return a+b ;
}
int main() {
    int x = 4 , y = 7 ;

    printf("the sum is %d\n" , sum(x,y));
    printf("the value of x is %d\n",x);
   return 0;
 } 
