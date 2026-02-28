# Title: Minimum Operations to Make Array Sum Divisible by K
# Submission ID: 1859853827
# Status: Accepted
# Date: 19 December 2025 at 08:11:08 pm IST

class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int sum = 0;
        for(int i = 0;i<nums.size();i++){
            sum+=nums[i];
        }
        return sum%k;
    }
};