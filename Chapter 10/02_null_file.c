#include <stdio.h>
 int main() {
  FILE *ptr ;
  ptr = fopen("himanshu.txt", "r") ; 
  if(ptr == NULL) {
    printf("File does not exist\n");
  } else {
    printf("File opened successfully\n");
  }
  char str[10] ;
  printf("\n");
  fscanf(ptr, "%s", &str);
  printf("Data from the file is %s\n",str);


   fscanf(ptr, "%s", &str);
  printf("And %s\n",str);
  fclose(ptr);

  return 0;
}