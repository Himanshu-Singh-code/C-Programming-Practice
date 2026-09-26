#include <stdio.h>
int main()
{
    char st[9];

    for (int i = 0; i < 8; i++)
    {
        scanf("%s", &st[i]);
        fflush(stdin);
    }
   st[9] = '\0' ;
    printf("%s", st);

    return 0;
}