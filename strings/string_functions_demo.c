/* C program to demonstrate some useful string functions */

#include <stdio.h>
#include <string.h>

int main(){

    // strlen(): length of a string
    char s[] = "Hello World!";
    printf("Length of s: %lu\n", strlen(s));

    // sizeof(): size (in bytes) that a data type occupies
    // return the memory size (in bytes), and not the actual string length:
    int x = 20;
    float y = 2.0;
    double z = 2.0;
    char ch = 'a';

    printf("Size of int: %lu\n", sizeof(x));
    printf("Size of float: %lu\n", sizeof(y));
    printf("Size of double: %lu\n", sizeof(z));
    printf("Size of char: %lu\n", sizeof(ch));
    printf("Memory size of s: %lu\n", sizeof(s));

    // strcat(): concatenate two string 
    char s1[30] = "Hello ";
    char s2[] = "World";
    strcat(s1, s2);

    printf("%s\n", s1);

    // strcpy(): copy the value of one string to another
    char str1[30] = "Hello World";
    char str2[30];
    strcpy(str2, str1);
    printf("%s\n", str2);

    // strcmp(): compare two strings
    char string1[] = "Hello";
    char string2[] = "Hello";
    char string3[] = "Hi";
    printf("%d\n", strcmp(string1, string2));
    printf("%d\n", strcmp(string2, string3));

    return 0;
}