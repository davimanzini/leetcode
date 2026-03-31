#include <iostream>
using namespace std;

class Solution {
public:
    bool checkStrings(string s1, string s2) {

        vector<int> evens1(26), evens2(26);
        vector<int> odds1(26), odds2(26);

        for(int i = 0; i < s1.length(); i++){
            if(i % 2 == 0){
                evens1[s1[i] - 'a']++;
                evens2[s2[i] - 'a']++;
            }
            else{
                odds1[s1[i] - 'a']++;
                odds2[s2[i] - 'a']++;
            }
        }

        return((evens1 == evens2) && (odds1 == odds2));
    }
};