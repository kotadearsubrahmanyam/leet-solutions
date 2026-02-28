# Title: Reverse Degree of a String
# Submission ID: 1859019756
# Status: Accepted
# Date: 18 December 2025 at 08:37:13 pm IST

class Solution {
public:
    int reverseDegree(string s) {
    int sum = 0;
    for (int i = 0; s[i]; i++) {
        int rev = 26 - (s[i] - 'a');
        sum += rev * (i + 1);
    }
    return sum;
    }
};