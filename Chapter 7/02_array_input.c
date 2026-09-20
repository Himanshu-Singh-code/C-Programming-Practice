#include <stdio.h>
 int main() {
int marks[5] ;
printf("enter the 6 numbers :");
   for (int i = 0; i < 5; i++)
   {        
    scanf("%d",&marks[i]);
   }
    for (int i = 0; i < 5; i++)
   {  
    printf("\nThe value at %d is %d \n",i,marks[i]);
   }
   
  return 0;
}