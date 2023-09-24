/* C program to calculate the sum of numbers from 1 to a given number. */

#include <stdio.h>

int sumNums(int num);

int main(){
    int num;
    printf("Enter a positive whole number: ");
    scanf("%d", &num);
    int sum = sumNums(num);
    printf("Sum of 1 to %d is %d.\n", num, sum);

    return 0;
}

int sumNums(int num){
    int n = num;
    if (n < 1){
        return 0;
    } else {
        return n + sumNums(n-1);
    }
}