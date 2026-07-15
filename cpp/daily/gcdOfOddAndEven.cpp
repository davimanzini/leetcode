#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        
        int evenFinal = 2 + 2 * (n - 1);
        int oddFinal = 1 + 2 * (n - 1);
        int evenSum = (2 + evenFinal) * n / 2;
        int oddSum = (1 + oddFinal) * n / 2;

        return gcd(evenSum, oddSum);
    }
};