# Title: Maximum Subarray
# Submission ID: 1946726708
# Status: Accepted
# Date: 13 March 2026 at 11:46:11 am IST

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n  = nums.size();
        int maxi = INT_MIN;
        int sum = 0;
        for(int i = 0;i<n;i++){
            sum = sum + nums[i];
            maxi = max(maxi,sum);
            if(sum<0){
                sum = 0;
            }       
             }
             return maxi;
    }
};
