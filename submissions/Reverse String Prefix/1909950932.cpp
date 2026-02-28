# Title: Reverse String Prefix
# Submission ID: 1909950932
# Status: Accepted
# Date: 6 February 2026 at 12:19:55 pm IST

class Solution {
public:
    string reversePrefix(string s, int k) {
        reverse(s.begin(),s.begin()+k);
        return s;
    }
};