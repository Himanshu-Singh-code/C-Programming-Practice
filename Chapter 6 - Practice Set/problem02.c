#include <stdio.h>

void returns(int* ptr){
    printf("the value of ptr is %d\n",ptr);
    printf("the value at ptr is %d\n",*ptr);

}

int main() {
int i = 10 ;
int* j = &i ;

printf("Address of i is %u\n",&i);

returns(j);
  return 0;
}