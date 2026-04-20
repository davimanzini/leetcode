#include <stdlib.h>
#include <stdio.h>

int compare(const void *x_void, const void *y_void){

    int x = *(int *)(x_void);
    int y = *(int *)(y_void);

    return((x > y) - (x < y));
}

int minimumDifference(int* nums, int numsSize, int k) {
    
    qsort(nums, numsSize, sizeof(int), compare);

    int i = 0;
    int diff;
    while((i + k -1) < numsSize){
        int menor = nums[i];
        int maior = nums[i];
        
        for(int j = i + 1; j < (i + k); j++){
            if(nums[j] < menor){
                menor = nums[j];
            }
            if(nums[j] > maior){
                maior = nums[j];
            }
        }
        if(i == 0){
            diff = maior - menor;
        }
        else if((maior - menor) < diff){
            diff = maior - menor;
        }
        i++;
    }
    return diff;
}

/*
int minimumDifference(int* nums, int numsSize, int k) {

    qsort(nums, numsSize, sizeof(int), compare);

    int diff = nums[k - 1] - nums[0];

    for (int i = 1; i + k - 1 < numsSize; i++) {
        int atual = nums[i + k - 1] - nums[i];
        if (atual < diff) {
            diff = atual;
        }
    }

    return diff;
}*/