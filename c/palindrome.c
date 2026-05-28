#include <stdio.h>
#include <stdbool.h>


bool isPalindrome(int x) {
    
    int vetor[20];
    for(int i = 0; i < 20; i++){
        vetor[i] = -1;
    }

    if(x < 0){
        return false;
    }
    if(x == 0){
        return true;
    }

    else{
        int k = 0;
        while(x > 0){
            vetor[k] = x % 10;
            x = x / 10;
            k++;
        }
        int tam = k;

        int i = 0;
        int j = tam - 1;
        bool palindrome = true;

        while(j > i){
            if(vetor[i] != vetor[j]){
                palindrome = false;
                break;
            }
            i++;
            j--;
        }
        return palindrome;
    }
}