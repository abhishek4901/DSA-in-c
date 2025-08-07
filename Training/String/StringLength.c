#include<stdio.h>
int main ()
{
    char s[50] = " i love my india";
    int i = 0;
    // while (s[i] != '\0') {
    //     i++;
    // }
    for ( i = 0; s[i] != '\0'; i++);//  only iteration not any colculation inside the loop then use ;
    // if use to calculation then use {} instead of ;
    printf("Length of string is %d", i);// %d because number need not need string 
    
    return 0;
}