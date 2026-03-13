# Title: Check if Array Is Sorted and Rotated
# Submission ID: 1946631197
# Status: Accepted
# Date: 13 March 2026 at 09:58:55 am IST

class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        int drops = 0;
        for (int i = 0; i < n; i++) {
            if (nums[i] > nums[(i + 1) % n]) drops++;
        }
        if(drops <=1) return true;
        return false;
    }
};