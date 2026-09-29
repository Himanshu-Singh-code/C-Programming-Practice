#include <stdio.h>

struct  vector 
{
int i ;
int j ;
};


 int main() {
    struct vector v = { 1,2} ;
    printf("The value of i is %d\n" , v.i);
    printf("The value of j is %d\n" , v.j);

  return 0;
}