#include <stdio.h>
 int main() {
   float income , tax = 0 ;
    printf("enter your income :\n");
     scanf("%f", &income);

     if(income <= 250000){
        tax = 0 ;
     }
     else if (income > 250000 && income <= 500000){
        tax = 0.05*(income - 250000);
     }
     else if (income > 500000 && income <= 1000000){
        tax = 0.05* 250000 + 0.2*(income - 500000);
     }
     else {
        tax = 0.05*250000 + 0.20*500000 + 0.30*(income - 1000000);
     }
 printf(" your tax is : %.2f\n" , tax);

  return 0;
} 