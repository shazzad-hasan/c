#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(){
    char s1[30];

    printf("Enter a string in lowercase letters: ");
    fgets(s1, sizeof(s1), stdin);

    char *s2 = malloc(strlen(s1));

    for (int i = 0; i < strlen(s1); i++){
        s2[i] = s1[i];
    }

    printf("s1: %s", s1);
    printf("s2: %s", s2);
    printf("Length of s1: %lu\n", strlen(s1));
    printf("Length of s2: %lu\n", strlen(s2));

    if (strlen(s2) > 0){
        s2[0] = toupper(s2[0]);
    }

    printf("s1 after capitalising s2: %s", s1);
    printf("s2 after capitalising s2: %s", s2);


    return 0;
}