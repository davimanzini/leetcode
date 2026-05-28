#include <stdbool.h>

bool isTrionic(int* nums, int numsSize) {

   bool aumentar = true;
   int count_increase = 0;
   int count_decrease = 0;

   int aumentos = 0;
   int diminuicoes = 0;

   for(int i = 1; i < numsSize; i++){
        
        if(nums[i] == nums[i - 1]){
            return false;
        }
        
        else if(aumentar){
            if(nums[i] < nums[i - 1]){
                if(count_increase == 0){
                    return false;
                }
                else{ //quebra
                    aumentar = false;
                    count_increase = 0;
                    count_decrease ++;
                    aumentos ++;
                }
            }
            else{ //maior que anterior
                count_increase ++;
            }
        }

        else if(!aumentar){ //diminuir
            if(nums[i] > nums[i - 1]){
                if(count_decrease == 0){
                    return false;
                }
                else{ //quebra
                    aumentar = true;
                    count_decrease = 0;
                    count_increase ++;
                    diminuicoes ++;
                    aumentos++;
                }
            }
            else{
                count_decrease ++;
            }
        }
   }
   if((aumentos == 2) && (diminuicoes == 1))
    return true;
   else
    return false;
}