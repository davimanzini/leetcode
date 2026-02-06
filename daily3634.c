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

        int global_removals = numsSize;

        int y = 0;
        for(int i = 0; i < numsSize; i++){

            long long current = (long long)nums[i] * k;

            while(y < numsSize && nums[y] <= current){
                y++;
            }
            int local_removals = i + numsSize - y;
            
            if(local_removals < global_removals) {
                global_removals = local_removals;
            }
        }
        return global_removals;
    }
}
