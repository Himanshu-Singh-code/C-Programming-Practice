#include <stdio.h>
 int main() {
    int n = 9 ;
   for (int i = 0; i < n; i++)
   {
    if(i == 3)
    {
       // break; // exit the loop when i is equal to 3
       continue; // skip the iteration when i is equal to 3
    }
    printf("the value of i is %d\n", i);
   }
   printf("skipped the iteration when i was equal to 3\n");

  return 0;
}