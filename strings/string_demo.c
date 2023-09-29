#include <stdio.h>
#include <string.h>

int main(){
    char text[100];

    printf("Enter a text: ");
    fgets(text, sizeof(text), stdin);

    printf("The text is: %s\n", text);

    printf("Each character of the text are: ");
    for (int i = 0; text[i] != '\0'; i++){
        printf("'%c' ", text[i]);
    }
    printf("\n");

    int length = strlen(text);
    printf("Length of the string: %d\n", length);

    return 0;
}