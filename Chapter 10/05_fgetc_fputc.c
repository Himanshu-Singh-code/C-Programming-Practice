#include <stdio.h>
 int main() {
  FILE *ptr ;
  ptr = fopen("himanshu.txt", "w") ; 
  // fgetc for reading a single character from  the file : 

  //char c = fgetc(ptr);
 // printf("%c",c);


 // fputc for writing a single character in the file :
 fputc('b',ptr);
    printf("\n");

    fclose(ptr);
  return 0;
}