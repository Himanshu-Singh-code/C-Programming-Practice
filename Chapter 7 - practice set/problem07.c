#include <stdio.h>
 int main() {
int a , b , c ;
scanf("%d %d %d" , &a , &b , &c);

int arr[a][b][c];

for (int i = 0; i < a; i++)
{
    for (int j = 0; j < b; j++)
    {
        for (int k = 0; k < c ; k++)
        {
        
        printf(" %u\n" , &arr[i][j][k]);    
        }
        
    }
    
}

  return 0;
}