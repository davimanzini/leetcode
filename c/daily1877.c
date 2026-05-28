#include <stdlib.h>
#include <stdio.h>

int compare(const void *x_void, const void *y_void){
    int x = *(int *)(x_void); //importante entender
    int y = *(int *)(y_void);

    return (x > y) - (x < y);
}

int minPairSum(int* nums, int numsSize){

    qsort(nums, numsSize, sizeof(int), compare);

    int max = 0;
    int x = 0;
    int y = numsSize - 1;

    while(x < y){
        int soma = nums[x] + nums[y];
        if(soma > max){
            max = soma;
        }
        x++;
        y--;
    }
    return max;
}