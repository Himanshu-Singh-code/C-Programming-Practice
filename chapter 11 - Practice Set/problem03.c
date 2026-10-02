// using realloc changing size from 6 to 10 : 

#include <stdio.h>
#include <stdlib.h>
 int main() {
int n = 6;
int *ptr ;
ptr = (int*)malloc(n*sizeof(int));
for (int i = 0; i < n; i++)
{
    scanf("%d",&ptr[i]);
}

    printf("array is : \n");

    for(int i = 0; i < n; i++)
{
    printf("%d  ", ptr[i]);
}
n = 10 ;

ptr = (int*)realloc(ptr, n*sizeof(int));
for (int i = 0; i < n; i++)
{
    scanf("%d",&ptr[i]);
}

printf("array is : \n");
for(int i = 0; i < n; i++)
{
    printf("%d  ", ptr[i]);
}

  return 0;
}