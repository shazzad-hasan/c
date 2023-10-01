#include <stdio.h>

typedef struct{
    double x;
    double y;
} Coordinate;

int main(){
    Coordinate p1;

    printf("x: ");
    scanf("%lf", &p1.x);
    printf("y: ");
    scanf("%lf", &p1.y);

    printf("(x, y): %lf %lf\n", p1.x, p1.y);

    return 0;
}