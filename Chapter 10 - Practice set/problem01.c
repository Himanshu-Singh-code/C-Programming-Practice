// program to read three integers from file.txt : 

#include <stdio.h>
 int main() {
  FILE *ptr ;
  int n1, n2, n3 ;
  ptr = fopen("file.txt", "r") ;  
   
    fscanf(ptr,"%d %d %d " , &n1 , &n2 , &n3);
    printf("The value of n1 is : %d\n", n1);
    printf("The value of n2 is : %d\n", n2);
    printf("The value of n3 is : %d\n", n3);
    fclose(ptr);
  return 0;
}