# Title: Max Consecutive Ones
# Submission ID: 1946694330
# Status: Wrong Answer
# Date: 13 March 2026 at 11:10:53 am IST

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int i = 0;
        int maxi = INT_MIN;
        while(i<n){
            int cone;
            if(nums[i]==1){
                cone++;
                maxi = max(cone,maxi);
            }else{
                cone = 0;
            }
            i++;
        }
        return maxi;
    }
};