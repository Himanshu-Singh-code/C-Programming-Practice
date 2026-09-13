#include <stdio.h>
int main()
{

    int a = 4;
    // if order is not defined , right to left
    printf("%d  %d  %d\n", a, ++a, a++);
// if order is defined then according to the order :
printf("%d\n",a);
printf("%d\n",++a);
printf("%d\n",a++);

    return 0;
}