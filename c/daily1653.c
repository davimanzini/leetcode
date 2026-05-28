int minimumDeletions(char* s) {
    
    int tamanho = 0;
    int numa = 0;

    for(int i = 0; s[i] != '\0'; i++){
        if(s[i] == 'a'){
            numa++;
        }    
        tamanho ++;
    }

    if(tamanho == 1 || numa == 0 || numa == tamanho){
        return 0;
    }

    int global_removals = tamanho;
    int numb = 0;

    for(int i = 0; i < tamanho; i++){
        
        int local_removals = local_removals = numb + numa;
        if(local_removals < global_removals){
            global_removals = local_removals;
        }

        if(s[i] == 'b'){
            numb++;
        }
        else if(s[i] == 'a'){
            numa--;
        }
    }

    if(numb < global_removals){
        global_removals = numb;
    }
    return global_removals;
}