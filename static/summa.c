/* This program uses a function to sum integers, which uses a static variable
  to store the cumulative sum. */

#include <stdio.h>

const int MAX_NUM = 20;

void sumInt();

int main(){
    int n;

    printf("Please enter number of integers to be  summed (no more than %d): ", MAX_NUM);
    scanf("%d", &n);

    for (int i = 0; i < n; i++){
        sumInt();
    }
    return 0;
}

void sumInt(){
    static int sum = 0;
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    sum += num;

    printf("The current sum is %d\n", sum);
}