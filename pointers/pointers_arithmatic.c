/* C program to demonstrate pointer arithmatic */

#include <stdio.h>

int main(){
    char *s = "Hi!";

    printf("%c\n", *s);
    printf("%c\n", *(s+1));
    printf("%c\n", *(s+2));

    printf("%s\n", s);
    printf("%s\n", s+1);
    printf("%s\n", s+2);

    return 0;
}