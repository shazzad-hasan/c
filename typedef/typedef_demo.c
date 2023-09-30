#include <stdio.h>

typedef int integer;
typedef double distance;

int main(){
    integer a, b;
    distance d;

    a = 1;
    b = 2;

    d = 20.20;

    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("d = %lf\n", d);

    return 0;
}