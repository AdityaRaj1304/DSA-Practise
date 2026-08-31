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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        while(!head->next->next){
            return {-1,-1};
        }
        ListNode* prev = head;
        ListNode* curr = head->next;
        ListNode* next = head->next->next;
        vector<int>critical_points;
        int idx = 1;
        while(next){
            if((curr->val>prev->val && curr->val>next->val)||(curr->val<prev->val && curr->val<next->val)){
                critical_points.push_back(idx);
            }
            prev=curr;
            curr=next;
            next=next->next;
        }
        if(critical_points.size()<2){
            return {-1,-1};
        }
        int minDist = INT_MAX;
        int maxDist = critical_points.back()-critical_points.front();
        for(int i=1;i<critical_points.size();i++){
            minDist=min(minDist,critical_points[i]-critical_points[i-1]);
        }
        return {minDist,maxDist};
    }
};


class Solution {
public:
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        while(!head->next->next){
            return {-1,-1};
        }
        ListNode* prev = head;
        ListNode* curr = head->next;
        ListNode* next = head->next->next;
        vector<int>critical_points;
        int first = -1 , last = -1;
        int prevIdx = -1;
        int idx = 1;
        int minDist = INT_MAX;
        while(next){
            if((curr->val>prev->val && curr->val>next->val)||(curr->val<prev->val && curr->val<next->val)){
                if(prevIdx == -1){
                    first = idx;
                    prevIdx = idx;
                }else{
                    minDist=min(minDist,idx-prevIdx);
                    prevIdx=idx;
                    last = idx;
                }
            }
            prev=curr;
            curr=next;
            next=next->next;
            idx++;
        }
        if(last==-1){
            return {-1,-1};
        }
        int maxDist = last-first;
        return {minDist,maxDist};
    }
};