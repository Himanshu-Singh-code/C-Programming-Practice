#include <stdio.h>
 int main() {
  FILE *ptr ;
  ptr = fopen("himanshu.txt", "w") ;  
    printf("File opened successfully\n");
    printf("\n");
    int num  = 9;
    int num2  = 11;
// first data in the file will be erased 
// then new data will be added in the file
    fprintf(ptr,"Data added in file is %d\n",num);
printf("\n");
fprintf(ptr, "and %d\n",num2);
    fclose(ptr);
  return 0;
}