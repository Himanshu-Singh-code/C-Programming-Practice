// program to find the decremental table :

#include <stdio.h>
 int main() {
int i = 10 ;
int n ;
printf("enter the no to find decremental table :");
scanf("%d",&n);
while(i>=1)
{
    printf("%d X %d = %d\n",n,i,n*i);
    i--;
}
  return 0;
}