
// program to double the integer in file04.txt : 
#include <stdio.h>
 int main() {
FILE *ptr ;
ptr = fopen("file04.txt" , "r");
int num ;
fscanf(ptr, "%d" , &num);
fclose(ptr);

ptr = fopen("file04.txt" , "w");
fprintf(ptr, "%d" , 2*num);

fclose(ptr);
  return 0;
}