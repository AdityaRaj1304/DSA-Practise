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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if(head == NULL || head -> next == NULL){
            return head;
        }
        ListNode *curr = head;
        while(curr->next){
            ListNode* next = curr->next;
            int divisor = gcd(curr->val,next->val);
            ListNode *node =new ListNode(divisor);
            curr->next=node;
            node->next=next;
            curr=next;
        }
        return head;
    }
};