/* C Program to calculate the area of a circle given radius */

#include <stdio.h>

const double PI = 3.14159265;

double circleArea(double r);

int main(){
    double r;

    printf("Enter radius (r): ");
    scanf("%lf", &r);

    double area = circleArea(r);

    printf("Area = %0.4lf\n", area);

    return 0;
}

double circleArea(double r){
    return PI * r * r;
}