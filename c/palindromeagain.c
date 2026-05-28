#include <stdlib.h>
#include <stdbool.h>

bool isPalindrome(int x) {
    
    if(x < 0){
        return false;
    }
    else if(x == 0){
        return true;
    }
    else{
        int nums[20];
        int i = 0;
        int tam = 0;
        while(x > 0){
            nums[i++] = x % 10;
            tam ++;
            x = x / 10;
        }

        bool palindrome = true;
        int a = 0;
        int b = tam -1;

        while(a < b){
            if(nums[a] != nums[b]){
                palindrome = false;
                break;
            }
            a++;
            b--;
        }
        return palindrome;
    }
}