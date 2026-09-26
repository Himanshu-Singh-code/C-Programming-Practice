/*#include <stdio.h>
#include <string.h>

int main()
{
    char a;
    int count = 0;

    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    printf("Enter a character to count: ");
    scanf(" %c", &a);   // note the space before %c

    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == a)
        {
            count++;
        }
    }

    printf("%d", count);

    return 0;
} */

#include <stdio.h>
#include <string.h>
int check(char n[], int a)
{
    int count = 0;

    for (int i = 0; i < strlen(n); i++)
    {
        if (n[i] == a)
        {
            count++;
        }
    }
    return count;
}

int main()
{

    char str[100];

    printf("Enter a String : ");
    scanf("%s", str);

    printf("\n");

    char n;
    printf(" Enter the Character to check : ");
    scanf(" %c", &n);

    printf("\n");

    printf("%d time occurance", check(str, n));

    return 0;
}
