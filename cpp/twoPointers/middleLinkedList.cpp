#include<bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
 
class Solution {
    public:
        ListNode* middleNode(ListNode* head) {
            
            ListNode *end = head;
            int total = 0;
            while(end != nullptr){
                end = end->next;
                total++;
            }

            ListNode *begin = head;
            int count = 1;
            int metade = total / 2;

            while(count <= metade){
                begin = begin->next;
                count++;
            }
            return begin;
        }
    };