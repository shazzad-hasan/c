/* C program to demonstrate how to copy and compare two strings */

#include <stdio.h>
#include <string.h>

int main(){
    char s1[30], s2[30];

    printf("Enter a string: ");
    fgets(s1, sizeof(s1), stdin);

    /* copying like s2 = s1 will encounter a compilatio error,
    because this will copy memory address of s1 to the value of s2
    rather than the content of s1 */
    strcpy(s2, s1);

    /* comparing like s2 == s1 will encounter compilation error
     because this compare two memory addresses, rather than the actual string contents */
    if (strcmp(s1, s2) == 0){
        printf("Same\n");
    } else {
        printf("Different\n");
    }

    return 0;
}