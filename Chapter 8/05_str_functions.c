#include <stdio.h>
#include <string.h>
// strlen() Function :
int main()
{
    char st[] = "Himanshu";
    // it shows the length without the null character :
    int length = strlen(st);

    printf("%d\n", length);

    // strcpy () Function :
    char copy[30];
    strcpy(copy, st); // it copies string value form another string :
    printf("%s , %s\n", copy, st);
    
    // strcat() Function :
    char st2[] = " Bhai" ;

    strcat(st,st2); // it joins two strings :
    printf("%s\n" , st);

    // strcmp Function :
  
    printf("%d" ,strcmp("far","ajax"));
    // first comes first - negative value 
    // second comes first -positive value 
    // It follows the ASCII value pattern 
    return 0;
}