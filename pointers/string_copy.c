/* C program to demonstrate how to copy a string from one variable to another */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char s1[30], s2[30];

    printf("Enter a string: ");
    fgets(s1, sizeof(s1), stdin);

    /* copying like s2 = s1 will encounter a compilatio error,
    because this will copy memory address of s1 to the value of s2
    rather than the content of s1 */

    strcpy(s2, s1);

    if (strlen(s2) > 0){
        s2[0] = toupper(s2[0]);
    }

    printf("%s\n", s1);
    printf("%s\n", s2);

    return 0;
}