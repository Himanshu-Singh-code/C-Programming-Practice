#include <stdio.h>
 int main() {
FILE *ptr ;
ptr = fopen("file02.txt","w");
int num ;
printf("Enter the Number for Table : ");
scanf("%d",&num);

for(int i = 1 ; i<11 ; i++)
{
    fprintf(ptr , "%d" , num*i);
    fprintf(ptr , "\n");
}
  return 0;
}