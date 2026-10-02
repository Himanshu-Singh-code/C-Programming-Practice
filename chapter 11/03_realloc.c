#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n = 5;
    int *ptr;
   
    ptr = (int *)malloc(n * sizeof(int));
    ptr = (realloc(ptr,10*sizeof(int)));
    // int arr[n] ; this is not allowed in c:
    // we need to use dynamic memory allocation
    ptr[0] = 1;
    ptr[1] = 2;
    ptr[2] = 3;
    ptr[3] = 4;
    ptr[4] = 5;
    ptr[5] = 6;
    ptr[6] =54;
    ptr[7] = 7;
    ptr[8] = 89;

    printf("%d %d %d %d %d %d %d %d %d ", ptr[0], ptr[1], ptr[2], ptr[3], ptr[4], ptr[5], ptr[6], ptr[7], ptr[8]);
    free(ptr); // Don't forget to free the allocated memory
    return 0;
}