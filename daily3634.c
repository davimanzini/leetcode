#include <stdlib.h>
#include <stdio.h>

int compare(const void *x_void, const void *y_void){

    int x = *(int *)(x_void);
    int y = *(int *)(y_void);

    return ((x > y) - (x < y));
}

int minRemoval(int* nums, int numsSize, int k) {

    qsort(nums, numsSize, sizeof(int), compare);

    if(numsSize == 1){
        return 0;
    }

    else{

        int x = 0;
        int y = numsSize - 1;
        int global_removals = 100000000;

        

        return global_removals;
    }
}