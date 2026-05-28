#include <stdlib.h>
#include <string.h>

char* addBinary(char* a, char* b) {
    
    int tam_a = strlen(a);
    int tam_b = strlen(b);
    int tam_ans;
    if(tam_a > tam_b){
        tam_ans = tam_a + 2; // +1 é pro \0
    }
    else{
        tam_ans = tam_b + 2;
    }

    char *ans = malloc((tam_ans) * sizeof(char));
    ans[tam_ans -1] = '\0';

    int x = tam_a - 1;
    int y = tam_b - 1;
    int carry = 0;
    int ans_idx = tam_ans - 2;

    while((x >= 0) || (y >= 0) || (carry > 01)){

        int soma = carry;

        if(x >= 0){
            soma += a[x] - '0';
        }
        if(y >= 0){
            soma += b[y] - '0';
        }

        ans[ans_idx] = (soma % 2) + '0';
        carry = soma / 2;
        
        x--;
        y--;
        ans_idx--;
    }

    if(ans_idx == -1){
        return ans;
    }
    else{
        return &ans[1];
    }
    
}