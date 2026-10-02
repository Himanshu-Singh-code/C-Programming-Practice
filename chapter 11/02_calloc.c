#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    int *ptr;
    printf("enter the number : ");
    scanf("%d", &n);
    ptr = (int *)calloc(n , sizeof(int));
    // int arr[n] ; this is not allowed in c:
    // we need to use dynamic memory allocation
    ptr[0] = 1;
    ptr[1] = 2;
    ptr[2] = 3;
    ptr[3] = 4;

    printf("%d %d %d %d ", ptr[0], ptr[1], ptr[2], ptr[3]);
    free(ptr); // Don't forget to free the allocated memory
    return 0;
}