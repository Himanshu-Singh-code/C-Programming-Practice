#include <stdio.h>
int main()
{
    int n;
    printf("enter n : ");
    scanf("%d", &n);
    int i = 0;

    while (i < n)
    {
        int j = 0;              // reset j for every row
        while (j < 2*i+1)
        {
            printf("*");
            j++;
        }
        printf("\n");
        i++;
    }

    return 0;
}