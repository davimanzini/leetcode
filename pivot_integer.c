#include <stdlib.h>
#include <stdio.h>

int pivotInteger(int n) {
    

    if(n == 1){
        return 1;
    }
    else{
        int ans = -1;
        int total_sum = ((n * n) + n)/2;
        for(int i = 1; i < n; i++){
            if((i * i) == total_sum){
                ans = i;
                break;
            }
        }
        return ans;
    }
}