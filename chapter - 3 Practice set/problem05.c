// program to find the biggest of the four numbers :
 #include <stdio.h>
  int main() {
    int a , b, c, d ;
    printf(" Enter a :");
    scanf("%d",&a);
    printf(" Enter b :");
    scanf("%d",&b);
    printf(" Enter c :");
    scanf("%d",&c);
    printf(" Enter d :");
    scanf("%d",&d);

    if (a>b && a>c && a>d){
        printf(" a is the biggest number\n");
    }
    else if (b>a && b>c && b>d){
        printf(" b is the biggest number\n");
    }
    else if (c>a && c>b && c>d){
        printf(" c is the biggest number\n");
    }
    else {
        printf(" d is the biggest number\n");
    }

   return 0;
 }