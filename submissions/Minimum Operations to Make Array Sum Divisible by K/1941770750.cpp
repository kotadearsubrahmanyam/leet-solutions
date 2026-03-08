# Title: Minimum Operations to Make Array Sum Divisible by K
# Submission ID: 1941770750
# Status: Accepted
# Date: 8 March 2026 at 02:13:32 pm IST

class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int sum = 0;
        for(auto i: nums){
            sum+=i;
        }
        return sum%k;
    }
};