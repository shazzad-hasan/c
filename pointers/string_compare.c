#include <stdio.h>
#include <string.h>

int main(){
    char s1[30], s2[30];

    printf("Enter first string: ");
    fgets(s1, sizeof(s1), stdin);

    printf("Enter second string: ");
    fgets(s2, sizeof(s2), stdin);

    // compare two memory address, it will always print different
    if (s1 == s2){
        printf("Same\n");
    } else {
        printf("Different\n");
    }

    // compare the content of the strings
    if (strcmp(s1, s2) == 0){
        printf("Same\n");
    } else {
        printf("Different\n");
    }

    return 0;
}