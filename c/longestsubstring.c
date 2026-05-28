int lengthOfLongestSubstring(char* s){
    
   int max_total = 0;
   int max_local = 0;
   int ascii[256] = {0};

   for(int i = 0; s[i] != '\0'; i++){
        if(ascii[s[i]] == 0){
            ascii[s[i]] = 1;
            max_local ++;
        }
        else{
            ascii[s[i - max_local]] = 0;
            if(max_local > max_total){
                max_total = max_local;
            }
            max_local --;
            i --;
        }
   }
   if(max_local > max_total){
    max_total = max_local;
   }
   return max_total;
}
