// strcpy

// slicing:
#include <stdio.h>
#include <string.h>

void mystrcpy(char trg[] ,  char src[]){
    int n  ;
    for (int i = 0; i < strlen(src); i++)
    {
    trg[i] = src[i] ;
    trg[strlen(src)] = '\0' ;
    }
}

int main()
{
    char source[] = "himanshu";
    char target[30] ;
    mystrcpy(target,source) ;
    printf("%s , %s " , source , target);
    return 0;
}