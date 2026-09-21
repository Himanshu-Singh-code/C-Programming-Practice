 #include <stdio.h>
  int main() {
 int n ;
 printf("enter the value of n : ");
 scanf("%d",&n);
 int arr[11];
  
 for (int i = 1; i < 11; i++)
 {
    arr[i] = n *(i);

    printf("%d X %d = %d \n" , n , i , n*(i));
 }
 

   return 0;
 }