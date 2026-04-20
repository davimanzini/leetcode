/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
#include <stdbool.h>

int* findDisappearedNumbers(int* nums, int numsSize, int* returnSize) {
    
    int *ans = malloc(numsSize * sizeof(int));
    
    for(int i = 0; i < numsSize; i++){
        int indice = abs(nums[i]) - 1;
        if(nums[indice] > 0){
            nums[indice] = -nums[indice];
        }
    }

    int pos_ans = 0;
    *returnSize = 0;
    for(int i = 0; i < numsSize; i++){
        if(nums[i] > 0){
            ans[pos_ans] = i + 1;
            (*returnSize)++;
            pos_ans ++;
        }
    }
    return ans;
}