#include <stdio.h>
#include <stdlib.h>

int* copy(int arr1[], int N){
    int* arr2 = malloc(N * sizeof(int));

    if (arr2 == NULL){
        return NULL;
    }

    for (int i = 0; i < N; i++){
        arr2[i] = arr1[i];
    }

    return arr2;
}

int main(int argc, char** argv){
    int nums[5] = {1, 2, 3, 4, 5};

    int* copy_num = copy(nums, 5);

    for (int i = 0; i < 5; i++){
        printf("%d\n", copy_num[i]);
    }
    free(copy_num);

    return 0;
}