#include <iostream>
using namespace std;


class Solution {
public:
    int minOperations(string s) {
        
        int ops_0 = 0;
        int ops_1 = 0;

        for(int i = 0; i < s.length(); i++){

            char expected_0;
            if(i % 2 == 0){
                expected_0 = '0';
            }
            else{
                expected_0 = '1';
            }
            if(s[i] != expected_0){
                ops_0++;
            }

            char expected_1;
            if(i % 2 == 0){
                expected_1 = '1';
            }
            else{
                expected_1 = '0';
            }
            if(s[i] != expected_1){
                ops_1++;
            }

        }
        return min(ops_0, ops_1);
    }
};