// celcuis to fahrenheit using functions :
 
#include <stdio.h>
float c2f(float c){
    return (9*c)/5 + 32 ;
}
int main() {
 float c ;
 printf("Enter temperature in celcius : ");
 scanf("%f",&c);

 printf("Temperature in fahrenheit is : %.2f",c2f(c));
   return 0;
 }