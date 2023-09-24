/* C program to demonstrate pointer*/

#include <stdio.h>

int main(){
    int x = 5;
    int *ptr;
    ptr = &x;

    printf("Value of x is %d\n", x);
    printf("Address of x is %p\n", &x);
    printf("Value of ptr is %p\n", ptr);
    printf("Value of the variable pointed by ptr is %d\n", *ptr);

    *ptr = 50;

    printf("Value of x is %d\n", x);
    printf("Address of x is %p\n", &x);
    printf("Value of ptr is %p\n", ptr);
    printf("Value of the variable pointed by ptr is %d\n", *ptr);

    return 0;
}