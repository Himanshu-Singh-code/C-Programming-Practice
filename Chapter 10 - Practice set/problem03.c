// program to read a file 
// character by character 
// printing it on the console : 

#include <stdio.h>
 int main() {
FILE *ptr ;
ptr = fopen("file03.txt" , "r");
char ch ;
while(1){
    ch = fgetc(ptr);
    printf("%c" , ch);

    if(ch == EOF){
        break ;
    }
}
  return 0;
}