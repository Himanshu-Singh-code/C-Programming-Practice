#include <stdio.h>
 int main() {
  // if(0) will not executed :

  if(26){
    printf("this is executed\n");
  }
  if(39.85){
    printf("this is also executed\n");
  }
  if('c'){
    printf("this char is also executed");
  }
  return 0;
}