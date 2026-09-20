#include <stdio.h>
 int main() {
int a = 5 ;
int *ptr = &a ;
char b = 'B';
int * ptr2 = &b ;
printf("the address is %u\n" , &a);
printf("the address is %u\n" , &b);
ptr2++ ;
printf("the address is %u\n" , ptr2);

printf("the address is %u\n" , ptr);
ptr++ ;
printf("the address is %u\n" , ptr);


return 0;
}