int findMaxConsecutiveOnes(int* nums, int numsSize) {
    
    int max = 0;
    int local = 0;
    for(int i = 0; i < numsSize; i++){
        if(nums[i] == 1){
            local++;
        }
        else{
            if(local > max){
                max = local;
            }
            local = 0;
        }
    }
    if(local > max){
        max = local;
    }
    return max;
}