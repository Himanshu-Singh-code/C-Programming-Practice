#include <stdio.h>
 int main() {
  FILE *ptr ;
  ptr = fopen("himanshu.txt", "r") ;  
    printf("File opened successfully\n");
    printf("\n");
    int num ;
    fscanf(ptr, "%d", &num);
    printf("Data from the file is %d\n",num);

    fclose(ptr);
  return 0;
}