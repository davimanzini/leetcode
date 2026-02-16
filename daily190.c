#include <stdlib.h>
#include <stdio.h>

int reverseBits(int n) {

    int bin_vet[32];
    int i = 0;

    while(n > 0){
        bin_vet[i] = n % 2;
        n /= 2;
        i++;
    }

    while(i < 32){
        bin_vet[i] = 0;
        i++;
    }

    unsigned ans = 0;
    unsigned exp = 1;
    for(int i = 31; i >= 0; i--){
        int valor = bin_vet[i] * exp;
        ans = ans + valor;
        exp *= 2;
    }
    return ans;
}