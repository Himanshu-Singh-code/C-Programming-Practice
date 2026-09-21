#include <stdio.h>
int main()
{
    int n1, n2, n3;
    printf(" enter the value of n1 : ");
    scanf("%d", &n1);
    printf(" enter the value of n2 : ");
    scanf("%d", &n2);
    printf(" enter the value of n3: ");
    scanf("%d", &n3);
    int arr[3][10];
    int mul[] = {n1, n2, n3};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            arr[i][j] = mul[i] * (j + 1);
            printf("The value of arr[%d][%d] is %d\n", i, j, arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}