#include <stdio.h>

typedef struct complex
{
    int real;
    int imaginary;
} c_no;

void display(c_no c){
    printf("%d + %di\n" , c.real , c.imaginary);
}

int main()
{
    c_no carr[5] ; 
for (int i = 0; i < 5; i++)
{
   printf(" Enter the real part : ");
   scanf("%d" , &carr[i].real);
   printf(" Enter the imaginary part : ");
   scanf("%d" , &carr[i].imaginary);

   display(carr[i]);
}


    return 0;
}
