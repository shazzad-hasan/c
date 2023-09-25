/* C program to demonstrate basics of structs */

#include <stdio.h>
#include <string.h>

struct myStructure{ // structure declaration
    int myNum;      // member (int variable)
    char myChar;    // member (char variable)
    char myString[30]; //member (string) 
};                      // end of structure with a semicolon

int main(){
    // create a structure variable myStructure, s1
    struct myStructure s1;

    // assign values to members
    s1.myNum = 1;
    s1.myChar = 'A';

    printf("My number: %d\n", s1.myNum);
    printf("My character: %c\n", s1.myChar);

    // create a structure variable myStructure, s2
    struct myStructure s2;

    // assign values to members
    s2.myNum = 2;
    s2.myChar = 'B';
    strcpy(s2.myString, "Hello World"); // assign a value to the string using strcpy function

    printf("My number: %d\n", s2.myNum);
    printf("My character: %c\n", s2.myChar);
    printf("My string: %s\n", s2.myString);

    // create a structure variable and assign values to it (at declaration time)
    struct myStructure s3 = {3, 'C', "Hello World Again"};
    printf("My number: %d, My character: %c, My string: %s\n", s3.myNum, s3.myChar, s3.myString);

    // copy s3 to s4
    struct myStructure s4 = s3;
    printf("My number: %d, My character: %c, My string: %s\n", s4.myNum, s4.myChar, s4.myString);

    // modify values
    s4.myNum = 4;
    s4.myChar = 'D';
    strcpy(s4.myString, "I'm learning C programming");
    printf("My number: %d, My character: %c, My string: %s\n", s4.myNum, s4.myChar, s4.myString);

    return 0;
}