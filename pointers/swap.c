/* C program to demonstrate call by value vs call by reference */

#include <stdio.h>

void swap1(int x, int y);
void swap2(int *x, int *y);

int main(){
    int x, y;

    printf("Enter x: ");
    scanf("%i", &x);

    printf("Enter y: ");
    scanf("%i", &y);

    printf("Call by value: \n");
    printf("x is %i, y is %i\n", x, y);
    swap1(x, y);
    printf("x is %i, y is %i\n", x, y);

    printf("Call by reference: \n");
    printf("x is %i, y is %i\n", x, y);
    swap2(&x, &y);
    printf("x is %i, y is %i\n", x, y);

    return 0;
}

void swap1(int x, int y){
    int temp = x;
    x = y;
    y = temp;
}

void swap2(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}