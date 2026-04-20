#include <iostream>
using namespace std;

bool comparador (int a, int b){ //true se a vem antes de b

    int bits_a = __builtin_popcount(a);
    int bits_b = __builtin_popcount(b);
    
    if(bits_a == bits_b){
        return a < b;
    }
    return bits_a < bits_b;
}


class Solution {
public:
    vector<int> sortByBits(vector<int>& arr){
     
       sort(arr.begin(), arr.end(), comparador);
       return arr;
    }
};