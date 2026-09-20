#include <stdio.h>
 int main() {
int cgpa[] = {9,8,8};
int *ptr = &cgpa[0];

for (int i = 0; i < 3; i++)
{
    printf("the value at %d is %d\n",i,cgpa[i]);
    printf("the address at %d is %u\n",i,*ptr);
    
    //ptr++;
    
}


  return 0;
}