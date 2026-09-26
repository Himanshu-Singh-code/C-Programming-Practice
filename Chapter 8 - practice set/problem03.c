#include <stdio.h>

int strlen(char n[])
{
    int i = 0;

    while (n[i] != '\0')
    {
        i++;
    }

    return i;
}

int main()
{
    char str[] = "him";
    printf("%d", strlen(str));
    return 0;
}