// to find average of 3 numbers using function
#include <stdio.h>
float average(float , float , float);


float average(float a, float b , float c){
    
  return (a+b+c)/3.0;

}


 int main() {
 int a = 5 , b = 5 , c = 10 ;
 printf("average of 3 numbers is : %.2f",average(a,b,c));
  return 0;
}