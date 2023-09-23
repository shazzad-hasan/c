#include <stdio.h>

void swap(int *x, int *y);

int main(){
    int x, y;

    printf("Enter x: ");
    scanf("%i", &x);

    printf("Enter y: ");
    scanf("%i", &y);

    printf("x is %i, y is %i\n", x, y);
    swap(&x, &y);
    printf("x is %i, y is %i\n", x, y);

    return 0;
}

void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}