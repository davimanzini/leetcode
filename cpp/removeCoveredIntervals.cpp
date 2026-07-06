#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        
        int total = intervals.size();
        if(total == 1) return 1;
        int ans = total;

        sort(intervals.begin(), intervals.end());

        int i = 0;
        int j = 1;

        while(j < total && i < j){
            if(intervals[i][0] != -1 && intervals[i][1] != -1){
                if(intervals[i][1] >= intervals[j][1]){
                    intervals[j][0] = -1;
                    intervals[j][1] = -1;
                    j++;
                    ans--;
                }
                else{
                    if(intervals[i][1] < intervals[j][0]){
                        if(j == total - 1) i++;
                        else{
                            j++;
                            i++; 
                        }
                    }
                    else{
                        if(j == total - 1) i++;
                        else j++;
                    }
                }
            }
            else{
                i++;
            }
        }

        return ans;
    }
};