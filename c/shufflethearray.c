/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* shuffle(int* nums, int numsSize, int n, int* returnSize){

    int *ans = malloc(numsSize * sizeof(int));

    int menos = 0;
    int mais = n -1;

    for(int i = 0; i < numsSize; i ++){
        if((i % 2 == 0)){
            ans[i] = nums[i - menos];
            menos ++;
        }
        else{
            ans[i] = nums[i + mais];
            mais --;
        }
    }
    *returnSize = numsSize;
    return ans;
}