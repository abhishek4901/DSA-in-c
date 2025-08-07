#include<stdio.h>
int main ()
{
    char s[50] = " i love my india";
    int i = 0, j, len = 0;
    char temp;
    // Find length
    while (s[len] != '\0') {
        len++;
    }
    // Reverse string in place
    for (i = 0, j = len - 1; i < j; i++, j--) {
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
    }
    printf("Reversed string: %s\n", s);
}