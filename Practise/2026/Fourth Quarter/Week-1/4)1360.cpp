#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
    const vector<int> months = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    bool isLeapYear(int year) {
        return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
    }

    int dateToDays(const string& date) {
        int year = stoi(date.substr(0, 4));
        int month = stoi(date.substr(5, 2));
        int day = stoi(date.substr(8, 2));

        // 1. Accumulate days from all preceding full years since 1970
        for (int y = 1970; y < year; y++) {
            day += 365 + isLeapYear(y);
        }

        // 2. Accumulate days from all preceding months in the current year
        for (int m = 0; m < month - 1; m++) {
            day += months[m];
        }

        // 3. Account for February 29th if current year is a leap year
        if (month > 2 && isLeapYear(year)) {
            day++;
        }

        return day;
    }

public:
    int daysBetweenDates(string date1, string date2) {
        return abs(dateToDays(date1) - dateToDays(date2));
    }
};