
#include <stdio.h>

int count(int a[] , int n ){

    int no_of_positives = 0 ;
    for (int i = 0; i < n; i++)
    {
      if (a[i] > 0){
        no_of_positives++ ;
      }  
    }
    return no_of_positives ;
}


int main() {
 int arr[] = {1,-2,3,-4,5,6,-7,8,9};

 printf("The No of positive Values are %d" , count(arr , 10));
  return 0;
}