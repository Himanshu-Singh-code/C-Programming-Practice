# include <stdio.h>
int main(){

  int marks[5] = {90, 85, 78, 92, 88};

printf("%d\t", marks[0]);   // 90
printf("%d\t", marks[4]);   // 88
printf("%d\t",marks[2]); 

marks[2] = 80;  // update an element
printf("%d\t",marks[2]); 
return 0 ;
}
