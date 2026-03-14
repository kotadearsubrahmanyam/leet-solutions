# Title: Build Array from Permutation
# Submission ID: 1947683566
# Status: Accepted
# Date: 14 March 2026 at 12:57:41 pm IST

class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        int n = nums.size();
        vector<int>result;
        for(auto i:nums){
            result.push_back(nums[i]);
        }
        return result;
    }
};