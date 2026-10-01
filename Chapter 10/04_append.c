#include <stdio.h>
 int main() {
  FILE *ptr ;
  ptr = fopen("himanshu.txt", "a") ;  
    printf("File opened successfully\n");
    printf("\n");
    int num  = 9;
    int num2  = 11;
// by using "a" mode, the data will be added at the end of the file
    fprintf(ptr,"Data added in file is %d\n",num);
printf("\n");
fprintf(ptr, "and %d\n",num2);
    fclose(ptr);
  return 0;
}