// program to create a array using dynamic memory allocation and then changing the size of the array using realloc :

#include <stdio.h>
#include <stdlib.h>
 int main() {
int n = 10;
int s = 7 ;
int *ptr ;
ptr = (int*)malloc(n*sizeof(int));
for(int i = 1 ; i<=n ;i++){
    ptr[i-1] = s*i;
}

printf("The ARRAY is : \n");
for(int i = 1 ; i<=n ;i++){
    printf("%d X %d = %d \n ",s ,i, ptr[i-1]);
}

n = 15 ;
ptr = (int*)realloc(ptr, 15*sizeof(int));
for(int i = 1 ; i<=n ;i++){
    ptr[i-1] = s*i;
}

printf("The ARRAY is : \n");

for(int i = 1 ; i<=n ;i++){
    printf("%d X %d = %d \n ",s ,i, ptr[i-1]);
}
  return 0;
}