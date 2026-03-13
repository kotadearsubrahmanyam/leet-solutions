# Title: Check if Array Is Sorted and Rotated
# Submission ID: 1946620275
# Status: Wrong Answer
# Date: 13 March 2026 at 09:45:12 am IST

class Solution {
public:
    bool check(vector<int>& nums) {
        vector<int>sorti;
        for(auto i:nums){
            sorti.push_back(i);
        }
        sort(sorti.begin(),sorti.end());
        int n = nums.size();
        int rotation = 1;
        int i = 0;
                while(nums[i] != sorti[(i+rotation)%n]){
                    rotation++;
                    
              }
               int flag = 0; 
        for(int i = 0;i<n;i++){
            if(nums[i] != sorti[(i+rotation)%n]){
                flag = 1;
                break;
            }
        }
        if(flag)return false;
        return true;
        
    }
};