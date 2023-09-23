/* C program to demonstrate differences between floats and doubles. */

#include <stdio.h>

int main(void){

    float myFloatValue = 3.141592653589793;
    double myDoubleValue = 3.141592653589793;


    printf("Byte size of float: %lu\n", sizeof(float));
    printf("Byte size of double: %lu\n", sizeof(double));

    printf("%.15f\n", myFloatValue); // prints different values from 7th decimal place
    printf("%.15lf\n", myDoubleValue); // prints accurate values

    return 0;
}