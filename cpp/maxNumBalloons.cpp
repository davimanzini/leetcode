#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxNumberOfBalloons(string text) {
  	
	    unordered_map<char, int> mp;
	    int n = text.length();
	    string balao = "balloon";	
	    int minimo = INT_MAX;	
		

	    for(int i = 0; i < n; i++){
		 mp[text[i]]++;
	    }

	    for(int i = 0; i < balao.length(); i++){
	    
	    	if(!mp.count(balao[i]) return 0;
		
		if(mp[balao[i]] < minimo) minimo = mp[balao[i]];
	    }

	    if(mp['l'] >= 2 && mp['o'] >= 2){
	   
	   	int menor = min(mp['l'], mp['o']);
		return min(menor / 2, minimo);
	    }

	    return 0;

	 	
    }
};
