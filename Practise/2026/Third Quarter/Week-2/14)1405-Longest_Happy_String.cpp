#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string longestDiverseString(int a, int b, int c) {
        priority_queue<pair<int,char>>pq;
        if(a>0){
            pq.emplace(a,'a');
        }
        if(a>0){
            pq.emplace(b,'b');
        }
        if(a>0){
            pq.emplace(c,'c');
        }
        pair<int,char>prev={0,'.'};
        int count = 0;
        string ans ="";
        while(!pq.empty()){
            auto it = pq.top();
            pq.pop();
            if(it.first==0){
                break;
            }
            if(it.second==prev.second){
                if(count==1){
                    ans+=it.second;
                    count++;
                    it.first--;
                    prev=it;
                    if(it.first>0){
                        pq.push(it);
                    }
                }else{
                    if(pq.size()==0){
                        break;
                    }else{
                        auto temp = pq.top();
                        pq.pop();
                        ans+=temp.second;
                        temp.first--;
                        count=1;
                        prev=temp;
                        if(temp.first>0){
                            pq.push(temp);
                        }
                        pq.push(it);
                    }
                }
            }else{
                ans+=it.second;
                it.first--;
                count=1;
                prev=it;
                if(it.first>0){
                    pq.push(it);
                }
            }
        }
        return ans;
    }
};