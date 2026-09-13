// calculate gravitational force ;

#include <stdio.h>
float force(float m){
    return m*9.8 ;
}
 int main() {
float m ;
printf("Enter mass : ");
scanf("%f",&m);
printf("g.force is : %.2f", force(m));
  return 0;
}