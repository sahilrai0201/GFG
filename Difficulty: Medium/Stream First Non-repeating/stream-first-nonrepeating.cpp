#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    string firstNonRepeating(string &s) {
        unordered_map<char, int> freq;
        queue<char> q;
        string ans = "";

        for (char ch : s) {
            // increase frequency
            freq[ch]++;
            q.push(ch);

            // remove repeating characters from front
            while (!q.empty() && freq[q.front()] > 1) {
                q.pop();
            }

            // first non-repeating character
            if (q.empty())
                ans.push_back('#');
            else
                ans.push_back(q.front());
        }

        return ans;
    }
};