#include <stdio.h>
#include <stdlib.h>

#define N 20000000

int main(){

    // allocate memory
    int* arr = malloc(N * sizeof(int));
    if (arr == NULL){
        return 1;
    }

    // populating N elements in array
    for (int i = 0; i < N; i++){
        arr[i] = i + 1;
    }

    // summing N elements in the array
    long sum = 0;
    for (int i = 0; i < N; i++){
        sum += arr[i];
    }
    printf("Sum = %lu\n", sum);

    free(arr);

    return 0;
}