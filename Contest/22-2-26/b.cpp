#include<bits/stdc++.h>
using namespace std;
#include <string>
using namespace std;
class Solution {
public:
    string resultingString(string s, int k) {
        while (true) {
            bool merged = false;
            int n = s.size();
            for (int i = 0; i < n; i++) {
                // j must satisfy j - i <= k
                for (int j = i + 1; j < n && j - i <= k; j++) {
                    if (s[i] == s[j]) {
                        // merge: remove the right character
                        s.erase(j, 1);
                        merged = true;
                        break;
                    }
                }
                if (merged) break;
            }

            if (!merged) break;
        }

        return s;
    }
};

#include <string>
using namespace std;

class Solution {
public:
    string resultingString(string s, int k) {
        while (true) {
            bool temp = false;
            int n = s.size();
            for (int i = 0; i < n; i++) {
                for (int j = i + 1; j < n && j - i <= k; j++) {
                    if (s[i] == s[j]) {
                        s.erase(j, 1);
                        temp = true;
                        break;
                    }
                }
                if (temp) break;
            }
            if (!temp) break;
        }
        return s;
    }
};