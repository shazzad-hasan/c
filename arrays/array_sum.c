/* C program to display array elements and calculate their sum. */

#include <stdio.h>

double arrSum(int arr[]);
void displayArr(int arr[]);

int main(void){
    int arr[5] = {1, 2, 3, 4, 5};
    double sum = arrSum(arr);
    displayArr(arr);
    printf("sum = %.2lf\n", sum);

    return 0;
}

void displayArr(int arr[]){
    for (int i = 0; i < 5; i++){
        printf("%d\n", arr[i]);
    }
}

double arrSum(int arr[]){
    double sum = 0.0;
    for (int i = 0; i < 5; i++){
        sum += arr[i];
    }
    return sum;
}