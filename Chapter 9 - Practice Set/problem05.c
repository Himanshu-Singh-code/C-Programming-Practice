#include <stdio.h>
#include <string.h>
 typedef struct bankaccount
{
    int acc_no ;
    int name[10] ;
    int ifsc[12] ;
    float balance ;
} ba;

 int main() {
ba a;
a.acc_no = 10102 ;
strcpy(a.name,"Himanshu");
strcpy(a.ifsc,"BARB0MAKIMA");
a.balance = 1000000.00 ;

printf("Name is %s\n" , a.name);
printf("Account No is %d\n" , a.acc_no);
printf("IFSC CODE is %s\n" , a.ifsc);
printf("BALANCE is %f\n" , a.balance);
  return 0;
}