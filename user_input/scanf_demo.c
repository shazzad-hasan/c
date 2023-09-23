#include <stdio.h>

int main(void){
    int a, myNum;
    float b;
    double c;
    char ch;
    char s1[20], s2[20], myChar;

    /* Read in an integer */
    printf("Enter an integer: ");
    scanf("%d", &a);
    printf("The integer was %d\n", a);
    printf("The integer was %i\n", a);

    /* Read in a float */
    printf("Enter a float: ");
    scanf("%f", &b);
    printf("The float was %f\n", b);    

    /* Read in a double */
    printf("Enter a double: ");
    scanf("%lf", &c);
    printf("The double was %f\n", c);
    printf("The double was %lf\n", c);

    /* Read in a character */
    printf("Enter a character: ");
    scanf(" %c", &ch);
    printf("The character was %c\n", ch);

    /* Read in a string */
    printf("Enter a string: ");
    scanf("%s", s1);
    printf("The string was %s\n", s1);

    // clear the input buffer
    while((c = getchar()) != '\n' && (c != EOF));

    /* Read in an string */
    printf("Enter a string: ");
    fgets(s2, sizeof(s2), stdin);
    printf("The string was %s\n", s2);

    /* Multiple inputs: Read in an integer and a char */
    printf("Enter a number and a character (separated by a space): ");
    scanf("%d %c", &myNum, &myChar);
    printf("The number was %d\n", myNum);
    printf("The character was %c\n", myChar);

    return 0;
}