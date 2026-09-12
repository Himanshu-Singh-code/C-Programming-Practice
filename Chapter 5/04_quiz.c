// using a library funtion to calculate the area of square :
#include <stdio.h>
#include <math.h>

int main() {
    double side ; // double data type is used to store decimal values
    printf("enter the side  : ");
    scanf("%lf", &side);
    double area = pow(side,2);
    printf("The area of the square is %.2f  m^2\n" , area);

    return 0;
}