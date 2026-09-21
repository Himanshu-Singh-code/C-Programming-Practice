
// Table of 5 :
#include <stdio.h>
 int main() {
int arr[11];
for (int i = 1; i < 11; i++)
{
 arr[i] = 5 *(i);
 printf("5 X %d = %d\n" ,i , arr[i]);
}

  return 0;
}

/*#include <stdio.h>
 int main() {
int table[11] = {0,5,10,15,20,25,30,35,40,45,50};

for (int i = 0; i < 11; i++)
{
    printf("5 X %d = %d\n",i,table[i]);
}

  return 0;
}  */