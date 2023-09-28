#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(){
    char s1[30];

    printf("Enter a string in lowercase letters: ");
    fgets(s1, sizeof(s1), stdin);

    int lenS1 = strlen(s1);

    char *s2 = malloc(lenS1);
    if (s2 == NULL){
        return 1;
    }

    for (int i = 0; i < lenS1; i++){
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

    free(s2);

    return 0;
}