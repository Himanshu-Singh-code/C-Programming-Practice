// encryption :
/*#include <stdio.h>
#include <string.h>
int main()
{

    char str[] = "Himanshu is so bad !";
    for (int i = 0; i < strlen(str); i++)
    {
        str[i] = str[i] + 1;
    }

    printf("%s", str);

    return 0;
}*/

// decryption :
#include <stdio.h>
#include <string.h>
int main()
{

    char str[] = "Ijnbotiv!jt!tp!cbe!";
    for (int i = 0; i < strlen(str); i++)
    {
        str[i] = str[i] - 1;
    }

    printf("%s", str);

    return 0;
}
