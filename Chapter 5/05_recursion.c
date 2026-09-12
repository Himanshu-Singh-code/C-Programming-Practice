#include <stdio.h>
int main()
{
    int factorial(int a)
    {
        {
            if (a == 0 || a == 1)
                return 1;
        }
        return factorial(a - 1) * a;
    }
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    printf("Factorial of %d = %d\n", n, factorial(n));

    return 0;
} 