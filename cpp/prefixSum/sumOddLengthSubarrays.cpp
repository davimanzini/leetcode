#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        
        int ans = 0;
        int n = arr.size();
        ans += arr[0];

        for(int i = 1; i < n; ++i){
            ans += arr[i];
            arr[i] += arr[i - 1];
        }

        int size = 3;
        int i = size - 1;
        int k = 0;

        while(size <= n){
            while(i < n){
                if(i - k == size){
                    ans += arr[i] - arr[k];
                    k++;
                }
                else{
                    ans += arr[i];
                }
                i++;
            }
            size += 2;
            i = size - 1;
            k = 0;
        }
        return ans;
    }
};