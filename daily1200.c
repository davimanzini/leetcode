/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */

#include <stdio.h>
#include <stdlib.h>

int compare(const void *x_void, const void *y_void){
    int x = *(int *)(x_void);
    int y = *(int *)(y_void);

    return((x > y) - (x < y));
}

int** minimumAbsDifference(int* arr, int arrSize, int* returnSize, int** returnColumnSizes) {
    
    qsort(arr, arrSize, sizeof(int), compare);

    int i = 0;
    int j = 1;
    int menor = arr[j++] - arr[i++];
    int count = 1;

    while(j < arrSize){
        int sub = arr[j++] - arr[i++];
        if(sub < menor){
            menor = sub;
            count = 1;
        }
        else if(sub == menor){
            count++;
        }
    }

    *returnSize = count;
    
    int **ans = malloc(count * sizeof(int*)); //alloca espaço p count ponteiros
    //do tipo int

    for(int i = 0; i < count; i++){ //espaço de 2 int p cada subvetor
        ans[i] = malloc(2 * sizeof(int));
    }

    int a = 0;
    int b = 1;
    int c = 0;

    while(b < arrSize){
        int check_diff = arr[b] - arr[a];
        if(check_diff == menor){
            ans[c][0] = arr[a];
            ans[c][1] = arr[b];
            c++;
        }
        a++;
        b++;
    }

    *returnColumnSizes = malloc(count * sizeof(int));
    for(int i = 0; i < count; i++){
        (*returnColumnSizes)[i] = 2;
    }

    return ans;
}