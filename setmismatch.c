/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
#include <stdbool.h>

int* findErrorNums(int* nums, int numsSize, int* returnSize) {
    
    *returnSize = 2;
    int *ans = malloc(2 * sizeof(int));

    for(int i = 1; i <= numsSize; i++){
        bool inside = false;
        int count = 0;
        for(int j = 0; j < numsSize; j++){
            if(nums[j] == i){
                inside = true;
                count ++;
            }
        }
        if(inside == false){
            ans[1] = i;
        }
        if(count == 2){
            ans[0] = i;
        }
    }
    return ans;
}