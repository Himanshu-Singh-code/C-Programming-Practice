#include <stdio.h>
int main()
{
    int a;
    printf("enter a : ");
    scanf("%d", &a);

    switch (a)
    {
    case 3:
        printf(" you have entered 3\n");
    case 5:
        printf(" you have entered 5\n");
        break;
    case 6:
        printf(" you have entered 6\n");
    default:
        printf(" i jumped \n");
    case 7:
        printf(" you have entered 7\n");
        break;
    case 8:
        printf(" you have entered 8\n");
    }

    return 0;
}