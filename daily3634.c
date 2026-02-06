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

        int global_removals = 1000000;

        for(int i = 0; i < numsSize; i++){

            int x = i;
            int y = numsSize - 1;
            int local_removals = i;

            int current = nums[x] * k;

            while(current < nums[y]){
                y--;
                local_removals ++;
            }
            if(local_removals < global_removals){
                global_removals = local_removals;
            }
        }
        return global_removals;
    }
}
