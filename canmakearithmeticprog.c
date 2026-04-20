#include <stdbool.h>
#include <stdlib.h>

int compare(const void *x_void, const void *y_void){

    int x = *(int *)(x_void);
    int y = *(int *)(y_void);

    return ((x > y) - (x < y));
}


bool canMakeArithmeticProgression(int* arr, int arrSize) {
    
    bool ans = true;

    if(arrSize == 2){
        return true;
    }
    else{

        qsort(arr, arrSize, sizeof(int), compare);

        int diff =  arr[1] - arr[0];
        for(int i = 1; i < arrSize - 1; i++){
            if((arr[i + 1] - arr[i]) != diff){
                ans = false;
                break;
            }
        }
        return ans;
    }
}