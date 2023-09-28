/* C program to demonstrate how to compare two strings */

#include <stdio.h>
#include <string.h>

int main(){
    char s1[30], s2[30];

    printf("Enter first string: ");
    fgets(s1, sizeof(s1), stdin);

    printf("Enter second string: ");
    fgets(s2, sizeof(s2), stdin);

    /* comparing like s2 == s1 will encounter compilation error
     because this compare two memory addresses, rather than the actual string contents */

    // compare the content of the strings
    if (strcmp(s1, s2) == 0){
        printf("Same\n");
    } else {
        printf("Different\n");
    }

    return 0;
}