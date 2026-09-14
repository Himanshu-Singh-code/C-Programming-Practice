#include <stdio.h>

 void swap(int* a, int* b)
    {
        int temp;
        temp = *a;
        *a = *b;
        *b = temp;
    }



int main()
{
   int x = 6 , y = 5 ;
    swap(&x,&y);
   printf("now the swap value of x is %d\n",x);
   printf("now the swap value of y is %d\n",y);

   
    return 0;
}