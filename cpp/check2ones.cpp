#include <iostrem>
using namespace std;

class Solution {
public:
    bool checkOnesSegment(string s) {
        
        int i = 0;

        while(i < s.length()){
            if(s[i] == '0'){
                break;
            }
            i++;
        }

        if(i == (s.length() - 1)){
            return true;
        }
        i++;
        bool ans = true;
        while(i < s.length()){
            if(s[i] == '1'){
                ans = false;
            }
            i++;
        }
        return ans;
    }
};