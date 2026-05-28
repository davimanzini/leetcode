#include <stdbool.h>

int smallestRepunitDivByK(int k) {
    
    if((k % 2 == 0) || (k % 5 == 0)){
        return -1;
    }
    else{
        int divisor = 1;
        int tam = 1;
        bool divisivel = false;
        
        while(divisivel == false){
            if(divisor % k == 0){
                break;
            }
            divisor = (divisor * 10) + 1;
            tam++;
        }
        return tam;
    }
}