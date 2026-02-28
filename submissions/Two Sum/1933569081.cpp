# Title: Two Sum
# Submission ID: 1933569081
# Status: Accepted
# Date: 28 February 2026 at 04:52:41 pm IST

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int>mp;
        int n = nums.size();
        for(int i = 0;i<n;i++){
            mp[nums[i]] = i;
        }
        for(int i = 0;i<n;i++){
            int need = target-nums[i];
            if(mp.find(need) != mp.end() && mp[need] != i){
                
                    return {mp[need],i};
                
            }
        }
        return {};
    }
};