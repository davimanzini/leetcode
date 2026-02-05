#include <stdio.h>
#include <stdlib.h>

int* constructTransformedArray(int* nums, int numsSize, int* returnSize) {
    
    int *ans = malloc(numsSize * sizeof(int));
    *returnSize = numsSize;

    for(int i = 0; i < numsSize; i++){
        
        int valor = nums[i];

        if(nums[i] > 0){
            ans[i] = nums[(i + valor) % numsSize];
        }
        else if(nums[i] < 0){
            int absoluto = abs(valor);
            absoluto = absoluto % numsSize;
            int complemento = numsSize - absoluto;
            ans[i] = nums[(i + complemento) % numsSize];
        }
        else{ //igual a zero
            ans[i] = nums[i];
        }
    }
    return ans;
}