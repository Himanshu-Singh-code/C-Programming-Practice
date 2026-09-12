
#include <stdio.h>

int sum(int , int ); // function prototype 
int diff(int , int ); // function prototype 
int product(int , int ); // function prototype 
float division(int , int ); // function prototype 

int sum(int a, int b){ // function definition
    printf("The sum is: %d\n", a + b);
    return a + b;
}

int diff(int a, int b){ // function definition
    printf("The difference is: %d\n", a - b);
    return a - b;
}
int product(int a, int b){ // function definition
    printf("The product is: %d\n", a * b);
    return a * b;
}
float division(int a, int b){ // function definition
    printf("The division is: %f\n", (float)a / (float)b);
    return (float)a / (float)b;
}


 int main() {
   int x, y  ;
   printf("Enter two numbers: \n");
   scanf("%d  %d", &x, &y);

   int result1= sum(x,y); // function call
   int result2= diff(x,y); // function call
   int result3 = product(x,y); // function call
   float result4 = division(x,y); // function call


  return 0;
}