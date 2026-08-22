#include <stdio.h>
 int main() {
   
    int maths, chemistry , physics ;
    printf("enter the marks of maths :\n");
     scanf("%d", &maths);
    printf("enter the marks of chemistry\n");
    scanf("%d", &chemistry);
    printf("enter the marks of physics\n");
       scanf("%d", &physics);

    if(maths>=33 && chemistry>=33 && physics>=33 && (maths+chemistry+physics)/3 >=40)
    {
        printf("you are pass\n");
        printf("your percentage is %d\n",(maths+chemistry+physics)/3);
    }
    else{
        printf("you are fail\n");
        printf(" your percentage is %d\n",(maths+chemistry+physics)/3);
    }
  return 0;
}