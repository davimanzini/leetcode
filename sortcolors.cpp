#include <iostream>
using namespace std;

class Solution {
public:
    void sortColors(vector<int>& nums) {
        
        if(nums.size() == 1){
            return;
        }

        int n = nums.size() - 1;
        int i = 0;
        int k = n;

        //colocar condicao de limites do vetor
        //coloca i e j no primeiro numero errado pra eles
        while((nums[i] == 0 || nums[k] == 2)){
            if(i == k - 1){ //so tem 0 e 2, se encontraram
                return;
            }
            if(nums[i] == 0){
                i++;
            }
            if(nums[k] == 2){
                k--;
            }
        }

        int j = i; //entre =i e k

        while(j <= k){
            if(nums[j] == 0 && i <= j){
                swap(nums[i], nums[j]);
                i++;
            }
            if(nums[j] == 2 && k > j){
                swap(nums[j], nums[k]);
                while(k > j && nums[k] == 2){
                    k--;
                }
            }
            if(nums[j] == 0 && i <= j){
                swap(nums[i], nums[j]);
                while(i < j && nums[i] == 0){
                    i++;
                }            
            }
            j++;
        }
    }
};