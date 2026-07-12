#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int secondsBetweenTimes(string startTime, string endTime) {
        int start_hour = (startTime[0]-'0')*10+(startTime[1]-'0');
        int start_min = (startTime[3]-'0')*10+(startTime[4]-'0');
        int start_sec = (startTime[6]-'0')*10+(startTime[7]-'0');
        int start_total = start_hour*3600+start_min*60+start_sec;

        int end_hour = (endTime[0]-'0')*10+(endTime[1]-'0');
        int end_min = (endTime[3]-'0')*10+(endTime[4]-'0');
        int end_sec = (endTime[6]-'0')*10+(endTime[7]-'0');
        int end_total = end_hour*3600+end_min*60+end_sec;

        int diff = end_total - start_total;
        if (diff < 0)
            diff += 24 * 3600;

        return diff;
    }
};